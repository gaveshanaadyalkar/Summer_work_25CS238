#include<stdio.h>
int main(){
    
    for(int i=1;i<=5;i++)
    {
        for(int s =1;s<=5-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c",'A'+ j-1);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }
        
        printf("\n");

    }
    return 0;
}