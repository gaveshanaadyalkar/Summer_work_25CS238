#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int t=5;
    int l=0;
    int h=size-1;
    int f=-1;
    while(l<=h)
    {int mid=(l+h)/2;
        if(arr[mid]==t)
        {
        f=mid;
        break;
    }
else if(arr[mid]<t)
{
    l=mid+1;
}
else{
    h=mid-1;
}}
if(f!=-1)
{
    printf("number %d found at %d",t,f);
}
else{
    printf("number is not found %d",t);
}
return 0;
}