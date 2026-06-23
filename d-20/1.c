#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter rows and column for first matrix");
    scanf("%d %d",&r1,&c1);
    printf("enter rows and column for second matrix ");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("column of first matrix should be equal to the rows of second matrix");
        return 1;
    }
    int first[r1][c2];
    int second[r2][c2];
    int result[r1][c2];
    printf("enter the element of first matrix",r1,c1);
    
    
 for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("elements [%d][%d]",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("elements [%d][%d]",i,j);
            scanf("%d",&second[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            result[i][j]=0;
            for(int k=0;k<c1;k++)
            {
             result[i][j]+=first[i][k]*second[k][j];
            }
        }
    }
    printf("resultant product matrix");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }
    return 0;}