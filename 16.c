#include<stdio.h>
int main()
{

    int i=0,n,sum=0;
    printf("N:");
    scanf("%d",&n);
    while(i!=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum:%d",sum);
}
