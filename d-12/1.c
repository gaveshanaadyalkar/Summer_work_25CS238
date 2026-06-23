#include<stdio.h>

int numPalindrome(int n)
{
    int r;
    int o=n;
    int reversed=0;
    while(n>0)
    {
        r=n%10;
        reversed=(reversed*10)+r;
        n=n/10;
    }
    return(o==reversed);
}
int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(numPalindrome(number))
    {
        printf("%d is palindrome",number);
    }
    else{
        printf("%d is not a palindrome",number);
    }
    return 0;
}

