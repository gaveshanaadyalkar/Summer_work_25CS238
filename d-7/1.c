#include<stdio.h>


    
int factorial(int n)
{
if(n==0||n==1)
{return 1;}

return n*factorial(n-1);
}
int main()
{
    int num;
    printf("enter a positive integer");
    scanf ("%d",&num);
    if(num<0)
    {
        printf("factorial is not defined for negative number");
    }
    else{
        printf("factorial of %d= %d",num,factorial(num));
    }

    return 0;
}