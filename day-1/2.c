#include<stdio.h>
int main()
{
    int num;
    printf("enter an integer");
    scanf("%d",&num);
    printf("multiplication table for %d",num);
    for(int i=1;i<=10;i++)
    {
        printf("\n%d * %d=%d\n",num,i,num*i);
    }
    return 0;
}