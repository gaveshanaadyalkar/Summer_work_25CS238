#include<stdio.h>
int main()
{

    char ch='*';
    int j;
    for(int i=1;i<=5;i++)
    {
        if(i==1||i==5)
        for(j=1;j<=5;j++)
        {
            printf("%c",ch);
        }
        else{
        for(j=1;j<=5;j++)
        {
            if(j==1||j==5)
            printf("%c",ch);
            else 
            printf(" ");}
        }
         printf("\n");
    }
    return 0;

}