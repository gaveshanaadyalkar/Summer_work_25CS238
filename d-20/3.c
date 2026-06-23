#include<stdio.h>
int main()
{
   int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
   int rowSum;
   for(int i=0;i<3;i++)
{
    rowSum=0;
    for(int j=0;j<3;j++)
    {
        rowSum+=matrix[i][j];
    }
    printf(" \n%dsum of row %d \n",i+1,rowSum);
}
return 0;
}