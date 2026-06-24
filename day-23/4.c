#include<stdio.h>
int main()
{
    char str[100];
    int f[300]={0};
    int maxc=0;
    char max_char;
    printf("enter the string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
     
        f[(int)str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(f[(int)str[i]]>maxc)
        {
            maxc=f[(int)str[i]];
            max_char=str[i];
        }

    }
    printf("maximum occuring character '%c,appearing %d times",max_char,maxc);
    return 0;
}