#include<stdio.h>
#include<string.h>
int rotations(char s1[],char s2[])
{
int l1=strlen(s1);
int l2=strlen(s2);
if(l1!=l2)
{
    return 0;
}
char temp[100]="";
strcat(temp,s1);
strcat(temp,s1);
if(strstr(temp,s2)!=NULL)
{
    return 1;
}else{
return 0;
}}
int main()
{
    char string1[]="ABCD";
    char string2[]="CDAB";
    if(rotations(string1,string2))
    {
        printf("yes it is rotation");
    }
    else{
        printf("no it is not a rotation");
    }
    return 0;
}