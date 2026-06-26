#include<stdio.h>
int main()
{
    int arr1[]={1,3,5};
    int arr2[]={2,4,6,7};
    int n1=3;
    int n2=4;
    int r[7];
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            r[k]=arr1[i];
            i++;
        }
        else{
            r[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        r[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        r[k]=arr2[j];
        j++;
        k++;}
    printf("merged array");
    for(k=0;k<(n1+n2);k++)
    {
        printf("%d",r[k]);
    }
    return 0;
}