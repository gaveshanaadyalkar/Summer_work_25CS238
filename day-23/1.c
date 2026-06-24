#include<stdio.h>
int main()
{
    char str[100];
    int c[300]={0};
    printf("enter a string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        c[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(c[(unsigned char)str[i]]==1)
        {
            printf("the first non repeating character %c",str[i]);
            return 0;
        }
    }
    printf(" no nonrepeating character ");
    return 0;
}