#include<stdio.h>
int main()
{
    int n;
    printf("enter the positive number");
    scanf("%d",&n);
    printf("%d factors are",n);
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
        }
    }

printf("\n");
return 0;}