#include<stdio.h>
int main()
{
    char str[100];
    int v=0;
    int c=0;
    printf("enter a word");
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        v++;}
    
  else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
    
        c++;
    }
    i++;}
    printf("vowels %d",v);
    printf("consonants %d",c);
    return 0;

}