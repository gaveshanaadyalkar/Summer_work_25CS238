#include<stdio.h>
int main()
{
    char text[]="W I S H";
    int j=0;
    for(int i=0;text[i]!='\0';i++)
    {
        if(text[i]!=' ')
        {
            text[j]=text[i];
            j++;
        }
    }
    text[j]='\0';
    printf("result '%s'\n",text);
    return 0;
}