#include<stdio.h>
int main()
{
int n,onum,rem,sum=0;
printf("enter a number");
scanf("%d",&n);
onum=n;
while(n>0)
{
    rem=n%10;
    int fact=1;
    for(int i=1;i<=rem;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
if(sum==onum)
{
    printf("%d is a strong number",onum);
}
else{
    printf("%d is not a strong number",onum);
}
return 0;
}