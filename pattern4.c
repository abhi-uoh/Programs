#include<stdio.h>
int main()
{
    int i,k;
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invaid Input\n");
        return 0;
        
    }
    int v=n;
    for (i=n; i>0;i--)
    {
        for(k=0; k<n-i; k++)
        {
            printf(" ");
           
        }
         for(int j=i; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
        
        

    }
    
}