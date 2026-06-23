#include<stdio.h>


int sumofdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10) +sumofdigits(n/10);
}
int main()
{
    int num,result;
    printf("enter the integer");
    scanf("%d",&num);
    result=sumofdigits(num);
    printf("%dsum of digits",result);

    return 0;
}