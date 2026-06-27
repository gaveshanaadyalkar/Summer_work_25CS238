#include<stdio.h>
int main()
{
    char name[50],roll[20],class[20];
    float math,science,english,history,computer;
    float total,percentage;
    printf("___STUDENT MARKSHEET___\n");
    printf("enter the student name");
    scanf("%s",name);
    printf("enter roll number");
    scanf("%s",roll);
    printf("enter class");
    scanf("%s",class);
    printf("\n enter marks(0-100):\n");
    printf("mathematics");
    scanf("%f",&math);
    printf("science");
    scanf("%f",&science);
    printf("English");
    scanf("%f",&english);
    printf("History");
    scanf("%f",&history);
    printf("Computer");
    scanf("%f",&computer);
    total=math+science+english+history+computer;
    percentage=(total/500)*100;
    printf("____REPORT CARD____");
    printf("NAME:%s\n",name);
    printf("ROLL NO:%s\n",roll);
    printf("CLASS %s\n",class);
    printf("MATHEMATICS     %.1f / 100\n",math);
    printf("SCIENCE     %.1f / 100\n",science);
    printf("ENGLISH     %.1f / 100\n",english);
    printf("HISTORY     %.1f / 100\n",history);
    printf("COMPUTER    %.1f / 100\n",computer);
    printf("total marks obtained %.1f / 500\n",total);
    printf("percentage           %.2f%%\n",percentage);
    if(percentage >= 40)
    {
        printf("result status:     PASSED\n");

    }
    else{
        printf("result status      FAILED\n");
    }
    return 0;
}