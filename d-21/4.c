#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the number of rows and columns");
    scanf("%d %d ",&r,&c);
    int matrix[r][c];
    printf("enter the elements of the matrixs");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("elements [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {printf("%d",matrix[i][j]);}
        printf("\n");}
        printf("\n");

    for(int j=0;j<c;j++)
    {
        int colSum=0;
        for(int i=0;i<r;i++)
        {
            colSum+=matrix[i][j];
        }
        printf("sum of column %d=%d",j+1,colSum);
    }
    return 0;
}