#include<stdio.h>
int main()
{
    int sum=0;
    int i=1,n;
    printf("Input N:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    printf("sum of square:%d",sum);
}
