#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char lw[100]="";
    char cw[100]="";
    int i,j=0;
    printf("enter a sentence");
    scanf("%[^\n]",s);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]!=' '&& s[i]!='\0')
        {
            cw[j]=s[i];
            j++;
        }
        else{
            cw[j]='\0';
            if(strlen(cw)>strlen(lw))
            {
                strcpy(lw,cw);
            }
            j=0;
        }
    }
    printf("the longest word %s",lw);
    printf("its length is %lu\n",strlen(lw));
    return 0;
}