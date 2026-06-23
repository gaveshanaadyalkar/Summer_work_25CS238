#include<stdio.h>
int main()
{
    int b;
    int d=0,base=1,rem;
    printf("enter the binary number");
    scanf("%d",&b);
    while(b>0)
    {
        rem=b%10;
        d=d+rem*base;
        b=b/10;
        base=base*2;
    }
    printf("decimal %d",d);
    return 0;
}