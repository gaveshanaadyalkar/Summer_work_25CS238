#include<stdio.h>
int main()
{
    int arr[100];
    int size,i,j,temp;
    printf("enter the number of elements");
    scanf("%d",&size);
    printf("entre %d element",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted array in desending order");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    
    }
  printf("\n");
  return 0;
}