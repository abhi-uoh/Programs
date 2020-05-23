#include<stdio.h>
intm main()
{
    int n1,n2;
    int sum=0;
    printf("Enter N1:");
    scanf("%d",&n1);
    printf("Enter N2:");
    scanf("%d",&n2);
    for(int i=0; i<n2; i++)
    {
        sum=sum+n1;
    }
    printf("%d",&sum);


}