#include<stdio.h>
#include<string.h>
struct Contact{
    char name[50];
    char phone[20];
};
struct Contact list[100];
int total=0;
int main()
{
    int choice;
    printf("\n___CONTACT MENU___\n");
    printf("1. Add Contact\n");
    printf("2.view all contacts\n");
    printf("3.exit\n");
    printf("enter your choice");
    scanf(" %d", &choice);
    if(choice == 1)
    {
        if(total<100)
        {
            printf("enter Name");
            scanf("%s",list[total].name);
            printf("enter phone");
            scanf("%s",list[total].phone);
            total++;
            printf("contact added successfully\n");

        }
        else{
            printf("contact list is full\n");
        }
        main();
    }
    else if(choice == 2)
    {
        if(total == 0)
        {
            printf("no contact saved yet\n");
        }
        else{
            printf("\n___SAVED CONTACTS___\n");
            for(int i=0;i<total;i++)
            {
                printf("%d. name: %s| phone:%s\n",i+1,list[i].name,list[i].phone);
            }
        }
        main();
    }
    else if(choice == 3)
    {
        printf("goodbye\n");
        return 0;
    }
    else{
        printf("invalid choice \n");
        main();
    }
    return 0;
}