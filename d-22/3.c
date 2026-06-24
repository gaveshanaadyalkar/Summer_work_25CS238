#include<stdio.h>
int main()
{
    char word[]="world";
    int c[300]={0};
    for(int i=0;word[i]!='\0';i++)
    {
        char letter =word[i];
        c[letter]++;
    }
    for(int i=0;i<300;i++)
    {
        if(c[i]>0)
        {
            printf("%c: %d\n",i,c[i]);
        }
    }
    return 0;
}