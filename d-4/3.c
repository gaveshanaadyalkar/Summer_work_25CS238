#include<stdio.h>
int main()
{
    int n,originalnum,remainder,result=0;
    printf("enter the three digit number");
    scanf("%d",&n);
    originalnum=n;
    while(originalnum!=0)
    {
        remainder=originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum/=10;
    }
    if(result==n)
    printf("it is armstrong number %d",n);
    else
    printf("it is not the armstrong number %d",n);
    return 0;
}