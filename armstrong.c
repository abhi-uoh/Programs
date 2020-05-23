#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int i,d;
    int c=0;
    int sum=0;
    
    printf("Enter N:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid input\n");
        return 0;
    }
    int s=n;
    int temp=n;
    while(n!=0)
    {
        c++;
        n=n/10;
        
    }
    while(s!=0)
    {
        d=s%10;
        sum=sum+ pow(d, c);
        s=s/10;
    }
    if(sum==temp)
    {
        printf("%d Number is armstrong\n  ",temp);
    }
    else
    {
        printf("%d Number is not armStrong\n",temp);
    }
}