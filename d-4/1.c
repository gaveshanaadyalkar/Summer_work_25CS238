#include<stdio.h>
int main()
{
    int n;
    int n1=0;
    int n2=1;
    int n3;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("fibbonaci series");
    for( int i=1;i<=n;i++)
    {
        printf("%d", n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        
    }
    printf("/n");
    return 0;
}