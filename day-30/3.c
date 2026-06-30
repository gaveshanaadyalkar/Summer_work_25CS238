#include<stdio.h>
#include<string.h>
#define MAX_EMPLOYEES 100
struct Employee{
    int id;
    char name[50];
    char designation[50];
    float salary;
};
int main()
{
    struct Employee emplist[MAX_EMPLOYEES];
    int totalEmployees=0;
    int choice;
    for(; 1; )
    {
        printf("\n____EMPLOYEE SYSTEM____");
        printf("\n1. Add Employee");
        printf("\n2. display All employees");
        printf("\n3. Search employees by id");
        printf("\n4. exit");
        printf("\n enter choice");
        scanf("%d", &choice);
        if(choice == 1)
        {
            if(totalEmployees>=MAX_EMPLOYEES){
                printf("system is full\n");
            }
            else{
                struct Employee e;
                printf("enter id");
                scanf("%d", &e.id);
                printf("enter name");
                scanf("%s", &e.name);
                printf("enter designation");
                scanf("%s", &e.designation);
                printf("enter salary");
                scanf("%f", &e.salary);
                emplist[totalEmployees]=e;
                totalEmployees=totalEmployees+1;
                printf("employee added successfully\n");

            }}
            else if(choice==2)
            {
                if(totalEmployees == 0)
                {
                    printf("no employee record\n");
                }
                else{
                    printf("\n%-5s %-15s %-15s %-10s\n","ID","NAME","ROLE","SALARY");
                    int i;
                    for(i=0;i<totalEmployees;i++)
                    {
                        printf("%-5d %-15s %-15s $%-10.2f\n",emplist[i].id,emplist[i].name,emplist[i].designation,emplist[i].salary);
                    }
                }
            }
            else if(choice == 3)
            {
                int searchId;
                int f=0;
                printf("enter id to search");
                scanf("%d", &searchId);
                int i;
                for(i=0;i<totalEmployees;i++)
                {
                    if(emplist[i].id==searchId)
                    {
                        if(emplist[i].id == searchId)
                        {
                            printf("\n Employee found");
                            printf("\nID %d",emplist[i].id);
                            printf("\nNAME %s",emplist[i].name);
                            printf("\ndesignation %s",emplist[i].designation);
                            printf("\nSalary $%.2f\n",emplist[i].salary);
                            f=1;
                            break;

                        }
                    }
                    if(f == 0)
                    {
                        printf("employee with id %d not found\n",searchId);
                    }
                }}
                else if(choice == 4){
                    printf("thank you for using the system goodbye\n");
                    break;
                }
                else{
                    printf("invalid choice");
                }
            }
        
        return 0;
        }
