#include<stdio.h>
int main()
{
    int d,re;
    int b=0;
    int p=1;
    printf("enter a decimal number");
    scanf("%d",&d);
    int t=d;
    while(t>0)
    {
        re=t%2;
        b=b+(re*p);
        p=p*10;
        t=t/2;
    }
    printf("decimal%d",d);
    printf("binary %d",b);
    return 0;

}