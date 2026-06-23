#include<stdio.h>

int findMax(int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else{
        return n2;
    }
}
int main()
{
    int a,b,max;
    printf("enter two integers");
    scanf("%d %d",&a,&b);
    max=findMax(a,b);
    printf("the maximum number is:%d",max);
    return 0;
}

