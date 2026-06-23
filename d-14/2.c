#include<stdio.h>
int main()
{

    int arr[]={2,4,6,8,10,12,6,14,16};
    int size=sizeof(arr)/sizeof(arr[0]);
    int find,count=0;
    printf("enter the element to find");
    scanf("%d",&find);
    for(int i=0;i<size;i++)
    {
        if(arr[i]==find)
        {
            count++;
        }
    }
    printf("%d element appears number of times %d",find,count);

    return 0;
}