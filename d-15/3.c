#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    int temp[5];
    for(int i=0;i<n;i++)
    {
        int new_position=(i+k)%n;
        temp[new_position]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    printf("rotated array");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

