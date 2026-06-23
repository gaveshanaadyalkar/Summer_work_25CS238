#include<stdio.h>
int main()
{
    int arr[100],n,i;
    int l,s;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    printf("enter the number of elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    s=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("largest element %d",l);
    printf("smallest element %d",s);

    return 0;
}