#include<stdio.h>

int main()
{
    int size;
    printf("enter the number of elements");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elements",size);
    for(int i=0;i<size;i++)
    {
        printf("elements %d",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the elements in your array");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
return 0;
}

