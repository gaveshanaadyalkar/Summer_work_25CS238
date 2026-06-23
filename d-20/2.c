#include<stdio.h>
int main()
{
    int matrixA[3][3],matrixB[3][3],result[3][3];
    int i,j;
    printf("enter elements for first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("enter elements for the second matrix");
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrixB[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j]=matrixA[i][j]-matrixB[i][j];
        }
    }
    printf("resulting matrix after subtracting");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
 return 0;
}