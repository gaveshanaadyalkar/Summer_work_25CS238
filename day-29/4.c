#include<stdio.h>
int main()
{
    int ids[100]={101,102,103};
    char names[100][20]={"Apple","grapes","banana"};
    int stocks[100]={50,30,40};
    int itemCount=3;
    int choice;
    for(;;)
    {
        printf("\n____INVENTORY MENU____\n");
        printf("1.add new items\n");
        printf("2.view all items\n");
        printf("3.exit\n");
        printf("enter choice");
        scanf("%d",&choice);
        if(choice == 1)
        {
            if(itemCount<100)
            {
                printf("enter unique id\n");
                scanf("%d", &ids[itemCount]);
                printf("enter item name \n");
                scanf("%s", &names[itemCount]);
                printf("enter stock quantity\n");
                scanf("%d", &stocks[itemCount]);
                itemCount++;
                printf("item added successfully\n");
            }
            else{
                printf("inventory full\n");
            }
        }
        else if(choice == 2)
        {
            printf("\nID\tName\t\tstock\n");
            for(int i=0;i<itemCount;i++)
            {
                printf("%d\t%-12s\t%d\n",ids[i],names[i],stocks[i]);
            }
        }
        else if(choice == 3)
        {
            printf("goodbye\n");
            break;
        }
        else{
            printf("invalid choice try again\n");
        }
    }
    return 0;
}