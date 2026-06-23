#include<stdio.h>
int main(){
    int arr[100];
    int size,i,target,flag=0;
    printf("enter the number of elements");
    scanf("%d",&size);
    printf("enter %d numbers",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to search");
    scanf("%d",&target);
    for(i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            printf("%d found at index position %d", target, i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is not present in the array",target);
    }
    return 0;

}