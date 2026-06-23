#include<stdio.h>
int main()
{
    int r,c,i,j;
    int A[10][10],B[10][10],sum[10][10];
    printf("enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    printf(" \nenter the elements of matrix A");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }printf(" \nenter the elements of matrix B ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
printf("resultant matrix");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d",sum[i][j]);
    }
    printf("\n");
}
    return 0;
}