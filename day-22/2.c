#include<stdio.h>
int main()
{
    char s[1000];
    int c=0;
    int i=0;
    printf("enter the sentence");
    scanf("%[^\n]",s);
    while(s[i]!='\0')
    {
        if(s[i]!=' '&& s[i]!='\t')
        {
            if(i==0|| s[i-1]==' '|| s[i-1]=='\t')
            {
                c++;
            }
        }
        i++;
    }
    printf("total words %d",c);
    return 0;
}