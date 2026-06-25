#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    int len =strlen(str);
    printf("original string %s\n",str);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                for(int k=i;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
                i--;
                break;
            }
        }
    }
    printf("result string %s",str);
    return 0;
}