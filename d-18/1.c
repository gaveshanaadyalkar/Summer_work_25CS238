#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9};
    int size1=5;
    int size2=4;
    int merge[9];
    int index=0;
    for(int i=0;i<size1;i++)
    {
     merge[index]=arr1[i];
     index++;
    }
    for(int i=0;i<size2;i++)
    {
        merge[index]=arr2[i];
        index++;
    }
    printf("merged array");
    for(int i=0;i<index;i++)
    {
        printf("%d",merge[i]);
    }
    return 0;
}