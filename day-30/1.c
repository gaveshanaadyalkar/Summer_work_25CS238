#include<stdio.h>
int ids[100];
char names[100][50];
float gpas[100];
int total_students=0;
int choice;
int main(){
for(; ;)
{
    printf("\n____STUDENT SYSTEM____\n");
    printf("1. Add Student\n");
    printf("2. show All Students\n");
    printf("3. exit\n");
    printf("enter choice");
    scanf("%d", &choice);
    if(choice == 1)
    {
        if(total_students>=100)
        {
            printf("system full\n");
        }
        else{
            printf("enter ID");
            scanf(" %d",&ids[total_students]);
            printf("enter name");
            scanf(" %s",names[total_students]);
            printf("enter gpa");
            scanf(" %f", &gpas[total_students]);
            total_students++;
            printf("Students added\n");
        }
    }
    else if(choice == 2)
    {
        if(total_students == 0)
        {
            printf("no records found\n");
        }
        else{
            printf("\nID\tNAME\tGPA\n");
            for(int i=0;i<total_students;i++)
            {
                printf("%d\t%s\t%.2f\n",ids[i],names[i],gpas[i]);
            }
        }
    }
    else if(choice==3)
    {
        printf("goodbye\n");
        return 0;
    }
    else{
        printf("invalid choice \n");
    }
    
}
return 0;}