#include<stdio.h>
#include<string.h>
int main()
{
    char books[3][30] = {"treasure chest","macbeth","harry potter"};
    int available[3]={1,0,1};
    int choice;
    char input_title[30];
    printf("____MINI LIBRARY____\n");
    printf("1. view shelf\n");
    printf("2. borrow 'Treasure chest'\n");
    printf("choose an option");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("\n BOOKS ON SHELF\n");
        printf("- %s (%s)\n",books[0],available[0]?"Available":"Checked out");
        printf("- %s (%s)\n",books[1],available[1]?"Available":"Checked out");
         printf("- %s (%s)\n",books[2],available[2]?"Available":"Checked out");
        

    }
    else if(choice == 2)
    {
        if(available[0]==1)
        {
            available[0]=0;
            printf("\n success you borrowed %s.\n",books[0]);
        }
        else{
            printf("\n sorry %s already checked out\n",books[0]);
        }
    }
    else{
        printf("\n invalid choice\n");
    }
    printf("\n program finished \n");
    return 0;
}