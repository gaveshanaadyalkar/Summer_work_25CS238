#include<stdio.h>
void leftRotate(int arr[],int n,int k)
{
    k=k%n;
    int temp[k];
    for(int i=k;i<k;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        arr[n-k+i]=temp[i];
    }
    }
int main()
{int arr[]={1,2,3,4,5};
int n=5;
int k=3;
leftRotate(arr,n,k);
printf("rotated array");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;}

