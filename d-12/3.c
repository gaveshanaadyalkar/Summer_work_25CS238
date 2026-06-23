#include<stdio.h>
void printFibonacci(int n)
{
    int t1=0;
    int t2=1;
     int nextterm;
    printf(" fibonacci series");
    for(int i=1;i<=n;i++)
    {
        printf("%d ", t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    printf("\n");
}
int main()
{
    int terms;
    printf("enter the number of terms");
    scanf("%d",&terms);
    if(terms<=0)
    {
        printf("plz enter positive number");
    }
    else{

    
    printFibonacci(terms);}

    return 0;
}