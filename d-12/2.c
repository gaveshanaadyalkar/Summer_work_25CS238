#include<stdio.h>

#include<math.h>
int countDigits(int n)
{
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }
    return count;
}
int isArmstrong(int n){
    int onum=n;
    int digits=countDigits(n);
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum+= pow(r,digits);
        n/=10;
    }
    return(sum==onum);
}
int main()
{
    int number;
    printf("enter an integer");
    scanf("%d",&number);
    if(isArmstrong(number))
    {
        printf("%d is an armstrong number",number);
    }
    else{
        printf("%d is not an armstrong number",number);
    }

    return 0;
}