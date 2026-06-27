#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 100
struct Student{
    int roll_no;
    char name[50];
    float marks;
};
int main()
{
    struct Student students[MAX_STUDENTS];
    int total_students=0;
    int choice;
    while(1)
    {
        printf("\n ____STUDENT RECORD SYSTEM____\n");
        printf("1. Add Students\n");
        printf("2. view all Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice ");
        if(scanf("%d", &choice)!=1)
        {
            printf("invalid input please enter the number\n");
            while(getchar() !='\n');
            continue;
        }
        
        if(choice ==1)
        {
            if(total_students < MAX_STUDENTS)
            {
                printf("\n enter the roll number");
                scanf("%d",&students[total_students].roll_no);
                printf("enter name ");
                scanf("%s",students[total_students].name);
                printf("enter marks");
                scanf("%f",&students[total_students].marks);
                total_students++;
                printf("student added succesfully\n");
            }
            else{
                printf("system storage full\n");
            }}
            else if(choice == 2)
            {
                if(total_students ==0)
                {
                    printf("\n no student records found.\n");
                }
                else{
                    printf("\n___STUDENT LIST___\n");
                    printf("roll no\tName\tMarks\n");
                    for(int i=0;i<total_students;i++)
                    {
                        printf("%d\t%s\t%.2f\n",students[i].roll_no,students[i].name,students[i].marks);
                    }
                }}
                else if(choice == 3)
                {
                    if(total_students==0)
                    {
                        printf("\n no records available to search");
                    }
                    else{
                    int search_roll,f=0;
                    printf("\n enter roll no to search");
                    scanf("%d",&search_roll);
                    for(int i=0;i,total_students;i++)
                    { if(students[i].roll_no== search_roll)
                        {
                            printf("\n student found,\n");
                            printf("Roll no: %d\n",students[i].roll_no);
                            printf("name: %s\n",students[i].name);
                            printf("marks: %.2f\n",students[i].marks);
                            f=1;
                            break;

                        }

                    }
                    if(!f)
                    {
                        printf("student not found\n");
                    }
                }}
                else if(choice == 4)
                {
                    printf("\n bye__END__\n");
                    break;
                }
                else{
                    printf("invalid choice please try again\n");
                }
            }
            return 0;
        }
    