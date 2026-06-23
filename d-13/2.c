#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    int avg;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements",n);
    for( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("sum %d",sum);
    printf("average %d",avg);

    return 0;
}