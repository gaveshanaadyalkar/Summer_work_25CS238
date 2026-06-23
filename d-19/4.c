#include<stdio.h>
int main()
{  int s,i,j,sum=0;
    printf("enter the size of square matrix");
    scanf("%d",&s);
    int matrix[s][s];
    printf("enter the element of matrix");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
           printf(" elements [%d][%d]",i,j);
           scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<s;i++)
    {
        sum=sum+matrix[i][i];
    }
    printf("sum of diagonal %d",sum);
    return 0;
}