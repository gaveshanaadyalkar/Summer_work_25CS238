#include<stdio.h>
#include<string.h>
int main()
{
    int bookid[20];
    char book_title[20][30];
    int is_issued[20]={0};
    int book_count=0;
    int choice;
    printf("____WELCOME TO THE LIBRARY SYSTEM____");
    for(int turn=0;turn<100;turn++)
    {
        printf("\n---MENU---\n");
        printf("1.Add book\n");
        printf("2.Display all books\n");
        printf("3.Issue book\n");
        printf("4.Exit program\n");
        printf("enter choice");
        scanf("%d", &choice);
        if(choice == 1)
        {
            if(book_count >= 20)
            {
                printf("library storage is full\n");
            }
            else{
                printf("enter book ID");
                scanf("%d",&bookid[book_count]);
                printf("enter book title");
                scanf("%s", book_title[book_count]);
                is_issued[book_count]=0;
                book_count++;
                printf("book added successfully\n");
            }
        }
        else if(choice == 2)
        {
            if(book_count == 0)
            {
                printf("the library is empty\n");
            }
            else{
                printf("\n___INVENTORY___\n");
                for(int i=0;i<book_count;i++)
                {
                    printf("ID %d|title:%s | Status: %s\n",bookid[i],book_title[i],is_issued[i]?"borrowed":"Available");

                }
            }
        }
        else if(choice == 3)
        {
            int target_id,f=0;
            printf("enter book id to issue");
            scanf("%d",&target_id);
            for(int i=0;i<book_count;i++)
            {
                if(bookid[i] == target_id)
                {
                    f=1;
                    if(is_issued[i]==1)
                    {
                        printf("this book is already borrowed\n");
                    }
                    else{
                        is_issued[i]=1;
                        printf("book issued successfully\n");
                    }
                }

            }
            if(f==0)
            {
                printf("book id not found\n");
            }
        }
        else if(choice==4)
        {
            printf("closing library system\n");
            return 0;
        }
        else{
            printf("invalid selection\n");
        }
    }
    printf("\n maximum operations reached closing system\n");
    return 0;

}

