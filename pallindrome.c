#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter N:");
    scanf("%d",&n);
    int rev=0;
    int i;
    int temp=n;
    for(i=0;n!=0; i++)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("Pallindrome:");
    }
    else
    {
        printf("Not Pallindrome:");
    }
    


}