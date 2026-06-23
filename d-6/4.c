#include<stdio.h>
int main()
{
    int x;
    int n;
    int r=1;
    printf("enter base");
    scanf("%d",&x);
    printf("enter exponent");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        r=r*x;
    }
    printf("%d raised to the power %d %d\n",x,n,r);
    return 0;
}