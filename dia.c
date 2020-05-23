#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of :");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<=n;i++)
    {
       for(j=0;j<=i;j++)
       {
           printf("%d",j);
       }
       printf("\n");
    } 
        for(i=n-1;i>=0;i--)
    {
       for(j=0;j<=i;j++)
       {
           printf("%d",j);
       }
       printf("\n");
    } 

}