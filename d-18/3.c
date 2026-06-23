#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={3,4,5,6,7,8};
    int size1=5;
    int size2=5;
    printf("intersection");
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}