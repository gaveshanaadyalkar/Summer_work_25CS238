#include<stdio.h>
int main()
{
    int arr[]={5,6,7,4,3};
    int size=5;
    int i,j,minind,temp;
    for(i=0;i<size-1;i++)
    {
        minind=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minind])
            {
                minind=j;
            }
        }
        temp=arr[minind];
        arr[minind]=arr[i];
        arr[i]=temp;
    }
    printf("sorted array");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}