#include<stdio.h>
#include<ctype.h>
int main()
{
    int score=0;
    char answer;
    printf("WELCOME TO THE QUIZ\n");
    printf("1. who was the first indian prime minister to have previously served as a state chief minister?\n");
    printf("A. NARENDRA MODI \n");
    printf("B. MORARJI DESAI\n");
    printf("C.CHARAN SINGH \n");
    printf("D. H.D DEVE GOWDA \n");
    printf("your answer: ");
    scanf(" %c", &answer);
    if(toupper(answer)=='B')
    {
        printf("Correct \n\n");
        score++;
    }
    else{
        printf("wrongthe correct answer is B \n\n");
    }
    printf("2. how many indian prime ministers in total have also served as a chief minister of an indian state at some point in their career?\n");
    printf("A. THREE\n");
    printf("B. SIX\n");
    printf("C. TWO\n");
    printf("D. FIVE\n");

    printf("your answer: ");
    scanf(" %c", &answer);
    if(toupper(answer)=='B')
    {
        printf("Correct \n\n");
        score++;
    }
    else{
        printf("wrong the correct answer is B \n\n");
    }
    printf("3. which indian prime minister famously served as the union finance minister from 1991 to 1996 before becoming the prime minister in 2004?\n");
    printf("A. MORARJI DESAI\n");
    printf("B. DR MANMOHAN SINGH\n");
    printf("C. V.P SINGH \n");
    printf("D. P.V NARASIMBA RAO\n");

    printf("your answer: ");
    scanf(" %c", &answer);
    if(toupper(answer)=='B')
    {
        printf("Correct \n\n");
        score++;
    }
    else{
        printf("wrongthe correct answer is B \n\n");
    }
    printf("____QUIZ OVER____");
    printf("you got %d out of 3 questions right \n",score);
    return 0;
}