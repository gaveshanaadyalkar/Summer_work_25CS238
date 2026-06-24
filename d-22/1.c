#include<stdio.h>
#include<string.h>
int main()
{char str[100];
    int l;
    int p=1;
    printf("enter the word");
    scanf("%s",str);
    l=strlen(str);
    for(int i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("%s is palindrome \n",str);
    }
    else{
        printf("%s is not palindrome \n",str);
    }
   return 0; 
}