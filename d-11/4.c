#include<stdio.h>


int findFactorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact ;
}
int main(){
int number;
int result;
printf("enter the number");
scanf("%d",&number);
if(number<0)
{
    printf("factorial does not exist ");
}
else{
    result=findFactorial(number);
    printf("factorial is %d %d \n",number,result);
}
return 0;}

