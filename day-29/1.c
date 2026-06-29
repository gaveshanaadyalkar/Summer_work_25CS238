#include<stdio.h>
int main()
{
    int choice;
    float n1,n2,result;
    printf("\n____CALCULATOR MENU____\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.divide\n");
    printf("enter choice (1-4)");
    scanf("%d",&choice);
    printf("enter first number");
    scanf("%f",&n1);
    printf("enter second number");
    scanf("%f",&n2);
    switch(choice)
    {
        case 1:
               result=n1+n2;
               printf("result = %.2f\n",result);
               break;
        case 2: result=n1-n2;
               printf("result = %.2f\n",result);
               break;
        case 3: result=n1*n2;
               printf("result = %.2f\n",result);
               break;
        case 4: if(n2 == 0)  {
            printf("cannot divide by zero\n");
        } 
                else{

                 result=n1/n2;
               printf("result = %.2f\n",result);}
               break;
        default:printf("invalid choice\n");     
}
return 0;
}