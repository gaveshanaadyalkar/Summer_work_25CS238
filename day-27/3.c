#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float basic_salary;
    float allowance;
    float tax;
    float net_salary;
};
int main()
{
    int employees;
    printf("how many employees do you want to manage?");
    scanf("%d",&employees);
    struct Employee emp[employees];
    for(int i=0;i<employees;i++)
    {
        printf("enter details for employee %d",i+1);
        printf("enter id");
        scanf("%d", &emp[i].id);
        printf("enter name\n");
        scanf("%s", emp[i].name);
        printf("enter basic salary\n");
        scanf("%f", &emp[i].basic_salary);
        emp[i].allowance=emp[i].basic_salary*0.20;
        emp[i].tax=emp[i].basic_salary*0.10;
        emp[i].net_salary=emp[i].basic_salary+emp[i].allowance-emp[i].tax;
    }
    printf("\n___SALARY SHEET___\n");
    printf("ID\tNmaee\tBasic\tAllowance\tTax\tNet Salary\n");
    for(int i=0;i<employees;i++)
    {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",emp[i].id,emp[i].name,emp[i].basic_salary,emp[i].allowance,emp[i].tax,emp[i].net_salary);
    }
  return 0;
    }
