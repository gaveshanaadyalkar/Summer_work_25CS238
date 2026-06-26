#include<stdio.h>
#include<string.h>
int main()
{
    char names[5][20];
    char temp[20];
    int i,j;
    printf("enter 5 names \n");
    for(i=0;i<5;i++)
    {
        scanf("%s",names[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("\nsorted names :\n");
        for(i=0;i<5;i++)
        {printf("%s\n",names[i]);
        }
        return 0;
}