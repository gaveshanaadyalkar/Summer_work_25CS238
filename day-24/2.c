#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="aaabbbcccddd";
    int len=strlen(str);
    int c=1;
    printf("original %s",str);
    printf("compressed ");
    for(int i=0;i<len;i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }
        else{
            printf("%c%d",str[i], c);
            c=1;
        }
    }

printf("\n");
return 0;}