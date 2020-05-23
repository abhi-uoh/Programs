#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("*");
        for(j=1;j<n-1;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(i=0;i<n;i++)
    {
        printf("*");
    }
}