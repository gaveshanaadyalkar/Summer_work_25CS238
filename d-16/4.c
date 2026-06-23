#include<stdio.h>
int main()
{

    int arr[]={1,2,3,4,5,4,3};
    int size=7;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<size-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("array after removing the duplicates");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}