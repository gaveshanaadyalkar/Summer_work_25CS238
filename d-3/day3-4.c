#include<stdio.h>
int main()
{int a,b,max;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    max=(a>b)?a:b;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            printf("lcm of two numbers is %d ",max);
            break;
        }
        ++max;
    }
    return 0;
}