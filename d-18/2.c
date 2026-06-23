#include<stdio.h>
int main()
{

        int arr1[]={1,2,3,4};
        int arr2[]={3,4,5,6};
        int size1=4;
        int size2=4;
        printf("union");
        for(int i=0;i<size1;i++)
        {
            printf("%d",arr1[i]);
        }
        for(int i=0;i<size2;i++)
        {
            int isDouble=0;
            for(int j=0;j<size1;j++)
            {
                if(arr2[i]==arr1[j])
                {
                    isDouble=1;
                    break;
                }
            }
            if(isDouble==0)
            {
                printf("%d",arr2[i]);
            }
        }
    printf("\n");
    return 0;

}