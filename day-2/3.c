#include<stdio.h>
int main()
{
    int num,digit;
    int p=1;
    printf("enter a number");
    scanf("%d",&num);
    while(num>0)
    {
        digit =num%10;
        p=p*digit;
        num=num/10;
    }
    printf("product of digits %d",p);
    return 0;
}