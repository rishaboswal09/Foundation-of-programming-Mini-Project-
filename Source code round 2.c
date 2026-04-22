/*
 * scorer.c  —  Fixed for Round 2
 * ─────────────────────────────────────────
 * argv[1] = user_answer
 * argv[2] = correct_answer
 * argv[3] = time_taken    (float, seconds)
 * argv[4] = time_limit    (int, seconds)
 * argv[5] = base_points   (int)
 * argv[6] = q_type        ("mcq","fill","tf")
 *
 * Scoring: speed-tiered
 *   <=30% time used → 100% pts
 *   30-60%          →  70% pts
 *   60-90%          →  40% pts
 *   >90%            →  20% pts
 *   wrong / timeout →   0 pts
 *
 * Compile:
 *   gcc scorer.c -o scorer.exe   (Windows)
 *   gcc scorer.c -o scorer       (Linux/Mac)
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trim(char *s) {
    int start = 0, end = (int)strlen(s) - 1;
    while (s[start]==' '||s[start]=='\t') start++;
    while (end>=start&&(s[end]==' '||s[end]=='\t'||s[end]=='\n'||s[end]=='\r')) end--;
    int len = end - start + 1;
    if (len <= 0) { s[0]='\0'; return; }
    memmove(s, s+start, len);
    s[len] = '\0';
}

void to_lower(char *s) {
    int i;
    for (i=0; s[i]; i++)
        if (s[i]>='A' && s[i]<='Z') s[i] += 32;
}

int main(int argc, char *argv[]) {
    if (argc < 6) {
        printf("{\"correct\":0,\"points\":0,\"feedback\":\"Error: missing args\",\"correct_label\":\"\"}");
        return 1;
    }

    char user_ans[256], correct_ans[256], q_type[16];
    strncpy(user_ans,    argv[1], 255); user_ans[255]='\0';
    strncpy(correct_ans, argv[2], 255); correct_ans[255]='\0';
    float time_taken = atof(argv[3]);
    int   time_limit = atoi(argv[4]);
    int   base_pts   = atoi(argv[5]);
    strncpy(q_type, (argc>=7)?argv[6]:"fill", 15); q_type[15]='\0';

    trim(user_ans);
    trim(correct_ans);

    /* Human-readable correct label (important for T/F display) */
    char correct_label[64];
    if (strcmp(q_type,"tf")==0)
        sprintf(correct_label, "%s", (strcmp(correct_ans,"1")==0) ? "TRUE" : "FALSE");
    else {
        strncpy(correct_label, correct_ans, 63); correct_label[63]='\0';
    }

    /* Case-insensitive comparison */
    char u[256], c[256];
    strncpy(u, user_ans,    255); u[255]='\0';
    strncpy(c, correct_ans, 255); c[255]='\0';
    to_lower(u); to_lower(c);
    int is_correct = (strcmp(u,c)==0) ? 1 : 0;
    int timed_out  = (time_limit>0 && time_taken>(float)time_limit) ? 1 : 0;

    /* Speed-tiered points */
    int points = 0;
    if (is_correct && !timed_out) {
        float ratio = (time_limit>0) ? (time_taken/(float)time_limit) : 1.0f;
        float mult;
        if      (ratio<=0.30f) mult=1.00f;
        else if (ratio<=0.60f) mult=0.70f;
        else if (ratio<=0.90f) mult=0.40f;
        else                   mult=0.20f;
        points = (int)(base_pts * mult);
        if (points < 1) points = 1;
    }

    /* Feedback — always shows correct answer on wrong */
    char feedback[256];
    if (is_correct && !timed_out)
        sprintf(feedback, "Correct! +%d pts", points);
    else if (is_correct && timed_out)
        sprintf(feedback, "Correct but time ran out — 0 pts");
    else if (timed_out)
        sprintf(feedback, "Time's up! Answer: %s", correct_label);
    else
        sprintf(feedback, "Wrong! Correct answer: %s", correct_label);

    printf("{\"correct\":%d,\"points\":%d,\"feedback\":\"%s\",\"correct_label\":\"%s\"}",
           (is_correct&&!timed_out)?1:0, points, feedback, correct_label);
    return 0;
}
