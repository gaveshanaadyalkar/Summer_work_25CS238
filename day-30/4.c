#include<stdio.h>
#include<string.h>
char names[5][50];
int roll[5];
int c=0;
void addStudent()
{
    if(c>=5)
    {
        printf("\n error storage full \n");
        return;
    }
    printf("\n enter roll number");
    scanf("%d", &roll[c]);
    printf("enter first name");
    scanf("%s",names[c]);
    c++;
    printf("success student added\n");
}
void displayStudents()
{
    if(c==0)
    {
        printf("\n no records found\n");
        return;
    }
    printf("\n____STUDENT LIST____\n");
    for(int i=0;i<c;i++){
        printf("roll no %d| Name: %s\n",roll[i],names[i]);
    }
}
void searchStudent()
{
    if(c == 0){
        printf("\n database empty\n");
        return;
    }
    char findName[50];
    int f=0;
    printf("\n enter name to search");
    scanf("%s",findName);
    for(int i=0;i<c;i++)
    {
        if(strcmp(names[i],findName)==0)
        {
            printf("\n found roll no:%d,Name:%s\n",roll[i],names[i]);
            f=1;
        }
    }
    if(!f)
    {
        printf("\n student not found\n");
    }
}
int main()
{
    int choice;
    printf("\nSTUDENT DATABASE MINI PROJECT\n");
    while(1)
    {
        printf("\n1.add student entry\n");
        printf("2. display all entries\n");
        printf("3.search student entry\n");
        printf("4.exit program\n");
        printf("select an option\n");
        scanf("%d",&choice);
        if(choice == 1)
        {
            addStudent();
        }
        else if(choice==2)
        {
            displayStudents();
        }
        else if(choice==3)
        {
            searchStudent();
        }
        else if(choice == 4)
        {
            printf("\n thank you for using the system goodbye\n");
            break;
        }else{
            printf("\n invalid option try again\n");
        }
    }
    return 0;
}