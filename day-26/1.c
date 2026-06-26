#include<stdio.h>
int main()
{
    int secret=9;
    int guess;
    printf("guess the secret number");
    scanf("%d",&guess);
    if(guess == secret)
    {
        printf("you win");
    }
    else{
        printf("wrong try again");
    }
    return 0;

}