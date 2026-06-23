#include<stdio.h>
int main()
{
    int num;
    int lf=0;
    printf("enter the positive integer");
    scanf("%d",&num);
    for(int i=2;i*i<=num;i++){
        if (num%i==0)
        {
            lf=i;
        }
        while(num%i==0){
            num/=i;
        }
        
    }
if(num>1)
lf=num;
printf("largest factor is %d",lf);
return 0;
}