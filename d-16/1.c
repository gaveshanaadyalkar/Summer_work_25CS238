#include<stdio.h>
int main()
{
    int arr[]={1,2,4,5};
    int n=5;
    int size=4;
    int exp_sum=0;
    int act_sum=0;
    for(int i=1;i<=n;i++)
    {
        exp_sum+=i;
    }
    for(int i=0;i<size;i++)
    {
        act_sum+=arr[i];
    }
    int missingn=exp_sum-act_sum;
    printf(" The missing number is %d",missingn);

    return 0;
}