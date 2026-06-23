#include<stdio.h>
int main()
{
    int num,r,s=0;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    printf("sum of digits %d",s);
    return 0;
}