#include<stdio.h>
int main()
{
    int n,i;
    int fact=1;
    printf("Enter M:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    printf("%d fact",fact);
}