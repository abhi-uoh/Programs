//strong number where sum of factor of number is equal to number;
#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid input\n");
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("Number %d is strong\n",n);
    }
    else
    {
        printf("Number %d is Not strong\n",n);
    }
}