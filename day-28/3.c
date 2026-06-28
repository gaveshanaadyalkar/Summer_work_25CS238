#include<stdio.h>
int main()
{
    int seats[5]={0,0,1,0,1};
    int choice;
    int seatNumber;
    printf("____CURRENT SEAT STATUS____\n");
    for(int i=0;i<5;i++)
    {
        if(seats[i]==0)
        {
            printf("saet %d AVAILABLE\n",i+1);
        }
        else{
            printf("seat %d: BOOKED\n",i+1);
        }
    }
    printf("\n1.book a seat\n");
    printf("2.cancel the seat\n");
    printf("3.exit\n");
    
    printf("enter choice");
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("enter seat number to book(1-5)");
        scanf("%d", &seatNumber);
        if(seatNumber<1||seatNumber>5)
        {
            printf("invalid seat number!choose between 1 and 5\n");
        }
        else if(seats[seatNumber-1]==1)
        {
            printf("sorry,seat %d is already booked\n",seatNumber);
        }
        else{
            seats[seatNumber - 1]=1;
            printf("success seat %d is now booked for you\n",seatNumber);
        }
    }
    else if(choice == 2)
    {
        printf("enter seat number to cancel");
        scanf("%d",&seatNumber);
        if(seatNumber<1 || seatNumber > 5)
        {
            printf("invalid seat number\n");
        }
        else if(seats[seatNumber-1]==0)
        {
            printf("sorry seat %d is already available\n",seatNumber);
        }
        else{
            seats[seatNumber-1]=0;
            printf("seat booking has been cancelled\n",seatNumber);
        }
    }
    else if(choice == 3)
    {
        printf("exiting system");}
    else{
        printf("invalid choice please try again\n");
    }

return 0;
}