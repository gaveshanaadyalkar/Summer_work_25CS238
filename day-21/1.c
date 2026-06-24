#include<stdio.h>
int main()
{
    char w[100]="hello";
    int c=0;
    while(w[c]!='\0')
    {
        c++;
    }
    printf("the length of the string %d",c);
    return 0;
}