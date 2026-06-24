#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int f=0;
    printf("enter a string");
    scanf("%s",str);
    int len =strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                printf("first repeating character is %c",str[i]);
                f=1;
                break;
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==0)
    {
        printf("no repeating characters found");
    }
    return 0;
}