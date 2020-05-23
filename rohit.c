#include<stdio.h>
int main()
{
    int n,c;
    int a=0;
    int b=1;
    int i;

    printf("Enter N:");
    scanf("%d",&n);

    
    
    for(i=0;i<n;i++)
    {
        
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        
        
        
    }
    printf("\n");
    

}