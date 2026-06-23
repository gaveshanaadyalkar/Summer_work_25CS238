#include<stdio.h>
int main()
{
    int start,end,i,temp,remainder,digits,sum;
    printf("enter the starting and ending numbers");
    scanf("%d %d,&start,&end");
    printf("armstrong numbers between %d and %d,start,end");
    for(i=start;i<=end;i++)
    {
        digits=0;
        temp=i;
        while(temp!=0)
        {
            temp/=10;
            digits++;
        }
         sum=0;
         temp=i;
         while(temp!=0)
         {
            remainder=temp%10;
            sum+=pow(remainder,digits);
            temp/=10;
         }
         if(sum==i)
         {
            printf("%d",i);
         }
    }
    printf("\n");
    return 0;
}