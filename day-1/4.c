#include<stdio.h>
int main()
{
    int num;
    int c=0;
    printf("enter an integer");
    scanf("%d",&num);
    int temp=num;
    do
    {
        c++;
        temp/=10;
    }while(temp!=0);
    printf("tne number%d has %d digits",num,c);
    return 0;
}