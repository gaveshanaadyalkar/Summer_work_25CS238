#include<stdio.h>
int main()
{
    int s,e,i,j,isprime;
    printf("enter the starting number");
    scanf("%d",&s);
    printf("enter the ending number");
    scanf("%d",&e);
    printf("prime number between start and end are %d %d ",s , e);
    for(i=s;i<=e;i++)
    {if(i<2)
    {continue;}
isprime=1;
for(j=2;j<=i/2;j++)
{
    if(i%j==0){
        isprime=0;
        break;
    }

}

if(isprime==1){
    printf("%d",i);
}}
printf("\n");
return 0;
}