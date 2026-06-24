#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int c1[300]={0};
    int c2[300]={0};
    int i;
    printf("enter first word");
    scanf("%s",str1);
    printf("enter second word");;
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("not anagrams");
        return 0;
    }
    for(i=0;str1[i]!='\0';i++)
    {
        c1[(int)str1[i]]++;
        c2[(int)str2[i]]++;
    }
    for(i=0;i<300;i++)
    {
        if(c1[i]!=c2[i])
        {
            printf("not anagrams");
            return 0;
        }
    }
    printf("strings are anagrams");
    return 0;
}