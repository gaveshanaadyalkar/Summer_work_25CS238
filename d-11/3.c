#include<stdio.h>

int checkPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<=num/2;i++){
    if(num%i==0)
    {
        return 0;
    }}
    return 1;
}
int main()
{
    int number;
    printf("enter a positive number");
    scanf("%d",&number);
    if(checkPrime(number))
    {
        printf("%d it is  a prime number",number);
    }
    else{
        printf("%d not  a prime number",number);
    }
    return 0;
}

