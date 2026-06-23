#include<stdio.h>

int rnum(int num,int reversed){
    if(num==0)
    {
        return reversed;
    }
    return rnum(num/10,(reversed*10)+(num%10));
}
int main()
{int number;
printf("enter an integer");
scanf("%d",&number);
int result = rnum(number,0);
printf("%d reversed number",result);
return 0;}

