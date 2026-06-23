#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("enter two integers");
    scanf("%d %d", &n1 , &n2 );
    int a=n1;
    int b=n2;
    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    printf("gcd of two numbers %d and %d,%d",a,b,n1);
        return 0;
    }
