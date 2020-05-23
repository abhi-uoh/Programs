#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter N:");
    scanf("%d",&n);
    if (n<0)
    {
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        c++;

    }
    if(c==2)
    {
        printf("\nNumber is Prime");
    }
    else
    {
        printf("\n Number is Not-Prime");
    }
    

    
}