#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invaid Input\n");
        return 0;
        
    }
    for (i=n; i>0;i--)
    {
    
        for(int j=0;j<i ;j++)
        {
            printf("*");
        }
        printf("\n");
        

    }
    
}
