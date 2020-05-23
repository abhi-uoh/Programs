#include<stdio.h>
int main()
{

    int sum=0;
    int n,odd=1;
    do
    {
        sum=sum+odd;
        odd=odd+2;
    }
    while(odd<n);
    printf("sum is:%d\n",sum);


}
