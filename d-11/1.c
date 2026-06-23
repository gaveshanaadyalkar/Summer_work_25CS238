#include<stdio.h>

int addNumbers(int a,int b);
int main()
{
    int n1,n2,sum;
    printf("enter first number");
    scanf("%d",&n1);
    printf("enter the second number");
    scanf("%d",&n2);
    sum=addNumbers(n1,n2);
    printf("sum of numbers is %d",sum);
    return 0;
}
int addNumbers(int a,int b)
{
    return a+b;

}