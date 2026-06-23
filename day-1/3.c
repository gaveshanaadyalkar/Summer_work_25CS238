#include<stdio.h>
int main()
{
    int n;
    int f=1;
    printf("enter the integer");
    if(scanf("%d",&n)!=1)
    {
        printf("error invalid input\n");
        return 1;
    }
    if(n<0)
    {
        printf("error factorial of negative number does not exist");
    }
    else{
        for(int i=1;i<=n;i++)
        {
            f*=i;
        }
        printf(" %d factorial of %d \n",n,f);
    }
    return 0;
}