#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[30];
    float salary;
};
int main()
{
    struct Employee emp[10];
    int count=0;
    int choice;
    while(1)
    {
        printf("\n___EMPLOYEE SYSTEM___\n");
        printf("1.Add Employee\n");
        printf("2.Display All\n");
        printf("3.Exit\n");
        printf("enter choice");
        choice=getchar();
        while(getchar()!='\n');
        if(choice == '1')
        {
            if(count<10)
            {
                printf("enter ID");
                if(scanf("%d", &emp[count].id)!=1){
                printf("invalid id\n");
                while(getchar()!='\n');
                continue;}
                while(getchar()!='\n');
                printf("enter Name");
                scanf("%49s", &emp[count].name);
                while(getchar()!='\n');

                printf("enter salary");
                if(scanf("%f, &emp[count].salary")!=1);{
                printf("invalid salary\n");
                while(getchar()!='\n');
                continue;}
                while(getchar()!='\n');
                count++;
                printf("employee added successfully\n");
            }
            else{
                printf("system full\n");
            }
    }
        else if(choice=='2')
        {
            if(count == 0)
            {
                printf("no data found\n");
            }
            else{
                printf("\nID\tName\tSalary\n");
                for(int i=0;i<count;i++)
                {
                printf("%d\t%s\t$%.2f\n",emp[i].id,emp[i].name,emp[i].salary);}
            }
        }
        else if(choice == 3)
        {
            printf("end\n");
            break;
        }
        else{
            printf("invalid choice\n");
        }
}
    return 0;
}