#include<stdio.h>
int main()
{
    int num,onum,renum=0,r;
    printf("enter an integer");
    scanf("%d",&num);
    onum=num;
    while(num!=0)
    {
        r=num%10;
        renum=renum*10+r;
        num/=10;
    }
    if(onum==renum)
    {
        printf("%d is palindrome\n",onum);
    }
    else{
        printf("%d is not palindrome\n",onum);
    }
    return 0;
}