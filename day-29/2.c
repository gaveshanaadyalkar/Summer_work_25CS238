#include<stdio.h>
#include<stdlib.h>
int arr[100]={0};
int size=0;
int main()
{
    int choice,item,pos,i,f;
    printf("\n____ARRAY MENU____\n");
    printf("\n1. add elements to end");
    printf("\n2. display array");
    printf("\n3. insert at position");
    printf("\n4. delete from position");
    printf("\n5. search element");
    printf("\n6. exit");
    printf("\n choose an option");
    scanf(" %d", &choice);
    getchar();
    switch(choice)
    {
        case 1:
        if(size>=100)
        {
            printf("array is full \n");
        }
        else{
            printf("enter value");
            scanf("%d",&item);
            getchar();
            arr[size]=item;
            size++;
            printf("added successfully\n");
        }
        break;
        case 2:if(size==0)  
        {
            printf("array is empty\n");
        }
        else{
            printf("array elements");
            for(i=0;i<size;i++)
            {
                printf("%d", arr[i]);
            }
            printf("\n");
        }
        break;
        case 3: if(size>=100)
        {
            printf("array is full\n");
            break;
        }
        printf("enter position (0 to %d):",size);
        scanf("%d",&pos);
        getchar();
        if(pos<0 || pos>size)
        {
            printf("invalid position\n");
        }
        else{
            printf("enter value");
            scanf("%d",&item);
            getchar();
            for(i=size;i>pos;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[pos]=item;
            size++;
            printf("inserted successfully\n");
        }
        break;
        case 4:
        if(size==0)
        {
            printf("array is empty\n");
            break;
        }
        printf("enter position to delete (0 to %d)",size-1);
        scanf("%d",&pos);
        getchar();
        if(pos<0||pos>=size)
        {
            printf("invalid position\n");
        }
        else{
            printf("deleted value %d\n",arr[pos]);
            for(i=pos;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
        }
        break;
        case 5:if(size == 0)
        {
            printf("array is empty\n");
            break;
        }
        printf("enter value to search");
        scanf("%d",&item);
        getchar();
        f=0;
        for(i=0;i<size;i++)
        {
            if(arr[i]==item){
                printf("found at position %d\n",i);
                f=1;
                break;
            }
        }
        if(f == 0)
        {
            printf("value not found in array \n");
        }
        break;
        case 6:
        printf("goodbye\n");
        exit(0);
        default:printf("invalid choice try again\n");
    }
    main();
    return 0;
}