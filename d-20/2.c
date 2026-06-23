#include<stdio.h>
int main()
{
    int matrix[10][10];
    int n,i,j;
    int isSymmetric=1;
    printf("enter the size of square matrix");
    scanf("%d",&n);
    printf("enter the element row by row");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("element [%d][%d]",i,j);
            scanf("%d",&matrix[j][i]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                isSymmetric=0;
            }
        }
    }
    if(isSymmetric==1)
    {
        printf("the matrix is symmetric");
    }
    else{
        printf(" the matrix is not symmetric");
    }
    return 0;
}