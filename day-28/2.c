#include<stdio.h>
int main()
{
    int accountNumber=101;
    char name[]="gaveshana";
    double balance=5000.0;
    int choice;
    double amount;
    do{
        printf("\n____SIMPLE BANK MENU____\n");
        printf("1. check balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4 Exit\n");
        printf("enter choice(1-4)");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nAccount: %d(%s)\n",accountNumber,name);
            printf("current balance: $%.2f\n",balance);
            break;
            case 2:
            printf("\n enter deposit amount :");
            scanf("%lf",&amount);
            if(amount>0)
            {
                balance+=amount;
                printf("successfully deposited new balance: $%.2f\n",balance);
            }
            else{
                printf("invalid amount\n");

            }
            break;
            case 3:printf("\n enter withdrawal amount :$");
            scanf("%lf",&amount);
            if(amount>balance)
            {
                printf("insufficient balance\n");
            }
            else if(amount<=0)
            {
                printf("invalid amount \n");
            }
            else{
                balance-=amount;
                printf("successfully withdrawn new balance:$%.2f\n",balance);
            }
            break;
            case 4:
            printf("\n thank you for using our bank\n");
            break;
            default:printf("\n invalid choice please select 1-4 \n");
            
        }
      }  while(choice!=4);
    return 0;
}