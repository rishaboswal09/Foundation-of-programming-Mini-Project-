#include<stdio.h>
#include <string.h>

int main(){

    int score=0;
    int answer;
    char ans[20];
    printf("===== C LANGUAGE QUIZ =====\n");

    printf("2] Who developed the c-programming language?\n");
    printf("1.James Gosling\n");
    printf("2.Bjarne Stroustrup\n");
    printf("3.Dennis Ritchie\n");
    printf("4.Ken Thompson\n");

    printf("Enter your option(1,2,3,4) : ");
    scanf("%d",&answer);

    if(answer==3){
        printf("Correct answer\n");
        score=score+1;
        
    }
    else{
        printf("Wrong answer\n");
    
    }
   


    printf("\n3] Which loop executes at least once?\n");
    printf("1. for loop\n");
    printf("2. while loop\n");
    printf("3. do-while loop\n");
    printf("4. none\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 3){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    }



    printf("4] Which operator is used for modulus?\n");
    printf("1. /\n");
    printf("2. %%\n");
    printf("3. *\n");
    printf("4. #\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 2){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    }

   

    printf("5] Which operator is used to find the remainder?\n");
    printf("1. / \n");
    printf("2. %% \n");
    printf("3. * \n");
    printf("4. & \n");
    printf("Enter your answer: ");
    scanf("%d",&answer);

    if(answer == 2){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    }



    printf("6]Which is a valid variable name?\n");
    printf("1. 2value\n");
    printf("2. float\n");
    printf("3. _total\n");
    printf("4. total-value\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    
    if(answer == 3){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    }



    printf("7] Size of char datat type in c.\n");
    printf("1. 1 byte\n");
    printf("2. 1 bit\n");
    printf("3. 2 bytes\n");
    printf("4. Depends on a compiler.\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    
    if(answer == 1){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    
    }



    printf("8]Which symbol is used for multi-line comments in C?\n");
    printf("1. // \n");
    printf("2. -- \n");
    printf("3. # \n");
    printf("4. /* */ \n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    
    if(answer == 4){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    
    }


    printf("9]Which operator is used for logical AND?\n");
    printf("1.  &\n");
    printf("2. ||\n");
    printf("3. &&\n");
    printf("4.  !\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    
    if(answer == 3){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    
    }



    printf("10] \nWhich function is used to take input in C?\n");
    printf("1.  printf()\n");
    printf("2.  input()\n");
    printf("3.  cin\n");
    printf("4.  scanf()\n");
    printf("Enter your answer: ");
    scanf("%d",&answer);
    
    if(answer == 4){
        printf("Correct!\n");
        score=score+1;
    }
    else{
        printf("Wrong!\n");
    
    }



    printf("===== (FILL IN THE BLANKS) =====\n");

    printf("11. C language was developed at __________ Labs.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"bell")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("12. The keyword used to return a value from a function is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"return")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n13. The loop used when number of iterations is known is __________ loop.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"for")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n14. The symbol used to end a statement in C is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,";")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n15. The operator used for address of variable is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"&")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n16. The function used to read input from user is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"scanf")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n17. Array index in C starts from __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"0")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n18. The decision making statement in C is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"if")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



    printf("\n19. The function used to compare two strings is __________.(lower_case)\n");
    scanf("%s", ans);
    if(strcmp(ans,"strcmp")==0){
        printf("Correct!\n");
        score++;}
    else{
        printf("Wrong answer\n");
    
    }



        printf("\n===== TRUE / FALSE SECTION =====\n");
    printf("Enter 1 for TRUE and 0 for FALSE\n\n");

    // Question 20
    printf("20. C is a case-sensitive language.\n");
    scanf("%d",&answer);
    if(answer == 1){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }



    // Question 21
    printf("\n21. A variable name can start with a number.\n");
    scanf("%d",&answer);
    if(answer == 0){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }



    // Question 22
    printf("\n22. printf() is used to take input from user.\n");
    scanf("%d",&answer);
    if(answer == 0){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }



    // Question 23
    printf("\n23. Every C program must have a main() function.\n");
    scanf("%d",&answer);
    if(answer == 1){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }

    // Question 24
    printf("\n24. break statement is used to exit a loop.\n");
    scanf("%d",&answer);
    if(answer == 1){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }



    // Question 25
    printf("\n25. sizeof is a function in C.\n");
    scanf("%d",&answer);
    if(answer == 0){
        printf("TRUE\n");
        score++;
    }
    else{
        printf("FALSE\n");
    }



    printf("\nYour Final Score = %d out of 25\n", score);


    return 0;
}