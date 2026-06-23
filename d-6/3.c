#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("enter an integer");
    scanf("%d",&n);
    while(n>0)
    {
        if(n & 1)
        {
            c++;
        }
        n=n>>1;
    }
    printf("total set bits %d",c);
    return 0;
}