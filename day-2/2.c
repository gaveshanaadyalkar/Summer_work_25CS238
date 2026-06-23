#include<stdio.h>
int main()
{
    int num,r;
    int renum=0;
    printf("enter an integer");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        renum=renum*10+r;
        num/=10;
    }
    printf("reversed number %d",renum);
    return 0;
}