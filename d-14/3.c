#include<stdio.h>
int main()
{

    int arr[100],size,i;
    int largest,second_l;
    printf("enter array size");
    scanf("%d",&size);
    printf("enter the elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    for(i=1;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    second_l=-1;
    for(i=0;i<size;i++)
    {
        if(arr[i]>second_l&&arr[i]<largest)
        {
            second_l=arr[i];
        }
    }
    if(second_l==-1)
    {
        printf("no distinct second largest element found");
    }
    else{
        printf("second largest element is %d",second_l);
    }
    return 0;
}

