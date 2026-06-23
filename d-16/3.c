#include<stdio.h>
int main()
{ int arr[]={1,2,3,4,5,6};
    int sum=7;
    int size=sizeof(arr)/sizeof(arr[0]);
    int f=0;
    printf("sum %d",sum);
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("pair found %d %d",arr[i],arr[j]);
                f=1;
                break;
            }
        }
        if(f)
        {
            break;
        }
    }
    if(!f)

{
    printf("no pair found ");
}
return 0;

}