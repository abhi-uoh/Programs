#include<stdio.h>
int main()
{
    int n1,n2,s1=0,s2=0;
    printf("Enter N1:");
    scanf("%d",&n1);
    printf("Enter N2:");
    scanf("%d",&n2);
    int d1=0,d2=0;
    if(n1<0 && n2<0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    if(n1==n2)
    {
        printf("Number is Amicable\n");
        return 0;
    }

    
    int i;
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
        s1=s1+i;
        }
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
        s2=s2+i;
        }
    }
    if(s1==n2 && s2==n1)
    {
        printf("Number %d and %d  are Amicable\n",n1,n2);

    }
    else 
    {
        printf("Number %d and %d  are Not Amicable\n",n1,n2);
    }
}