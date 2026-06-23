#include<stdio.h>
int main()
{

    int arr[]={41,0,3,0,5,6,7};
    int n=7;
    int temp[7];
    int index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            temp[index]=arr[i];
            index++;
        }
    }
    while(index<n)
    {
        temp[index]=0;
        index++;
    }
    printf("result");
    for(int i=0;i<n;i++)
    {
        printf("%d",temp[i]);
    }

    return 0;
}