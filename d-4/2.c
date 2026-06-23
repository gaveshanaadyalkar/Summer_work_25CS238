#include<stdio.h>
int main()
{
    int n;
    int t1=0,t2=1,nextterm=0;
    printf("enter the term position");
    scanf("%d",&n);
    if(n<0)
    {printf("enter a positive integer");
    return 1;}
    for(int i=0;i<=n;i++)
    {
        if(i==0){
        nextterm=t1;}
        else if(i==1)
        {
            nextterm=t2;}
        
        else{
            nextterm=t1+t2;
            t1=t2;
            t2=nextterm;}
        
    }
    printf("the fibonaaci series  is %d %d", n , nextterm);
    return 0;
}