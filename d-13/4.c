#include<stdio.h>
int main()
{
    int size,i;
    int even_count =0;
    int odd_count =0;
    printf("enter the number of elements in the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d numbers \n",size);
    for( i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("total even elements %d\n",even_count);
    printf("total odd elements %d\n",odd_count);
    return 0;
}