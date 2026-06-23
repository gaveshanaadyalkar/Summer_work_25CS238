#include<stdio.h>
int main()
{
    int arr[]={4,6,7,8,8,9,8,5,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    int max_element=arr[0];
    int max_count=0;
    for(int i=0;i<n;i++)
    {
        int current_count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                current_count++;
            }
        }
        if(current_count>max_count)
        {
            max_count=current_count;
            max_element=arr[i];
        }
    }
    printf("element with maximum frequency %d",max_element);
    printf("\nit appears %d times\n",max_count);
    return 0;
}

