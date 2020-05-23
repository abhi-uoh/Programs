#include<stdio.h>
int main()
{

    int i;
    int sum=1;
    for(i=0;i<7;i++)
    {
        sum=sum+i*i;

        printf("\n%d \t%d",i,sum);
    }
}
