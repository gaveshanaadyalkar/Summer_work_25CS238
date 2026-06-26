#include<stdio.h>
int main()
{
    int pin=1916,entered_pin,choice;
    float balance=5000,amount;
    printf("enter ATM pin");
    scanf("%d",&entered_pin);
    if(entered_pin!=pin)
    {
        printf("wrong PIN\n");
        return 0;
    }
    printf("\n1 .check Balance\n2. Deposit\n3.Withdraw\n");
    printf("choose an option");
    scanf("%d",&choice);
    if(choice ==1)
    {
        printf("your balance is:$%.2f\n",balance);
    }
    else if(choice==2)
    {
        printf("enter deposit amount");
        scanf("%f",&amount);
        balance=balance+amount;
        printf("new balance: $%.2f\n",balance);
    }
    else if(choice==3)
    {
        printf("enter the withdrawal amount");
        scanf("%f",&amount);
        if(amount>balance)
        {
            printf("not enough money \n");
        }
        else{
            balance=balance-amount;
            printf("please take your cash remaining: $%.2f\n",balance);
        }
    }
    else{
        printf("invalid choice \n");
    }
    return 0;
}