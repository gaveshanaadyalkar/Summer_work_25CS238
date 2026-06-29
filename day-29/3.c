#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int choice;
    for(;;){
        printf("\n____STRING MENU____\n");
        printf("1. Find length \n");
        printf("2. copy String\n");
        printf("3. join two strings\n");
        printf("4.compare two strings\n");
        printf("5.exit\n");
        printf("enter your choice");
        scanf(" %d", &choice);
        switch(choice)
        {
            case 1: printf("enter a string \n");
            scanf(" %s", str1);
            printf("length of string %d\n",(int)strlen(str1));
            break;
            case 2: printf("enter string to copy");
            scanf(" %s", str1);
            strcpy(str2,str1);
            printf("copied string is: %s\n",str2);
            break;
            case 3:printf("enter first string\n");
            scanf(" %s", str1);
            printf("enter second string\n");
            scanf(" %s", str2);
            strcat(str1,str2);
            printf("joined string %s\n",str1);
            break;
            case 5: printf("exiting goodbye\n");
            break;
            default:printf("invalid choice try again\n");
            break;
        }
        if(choice == 5)
        {
            break;
        }
    }
    return 0;
}