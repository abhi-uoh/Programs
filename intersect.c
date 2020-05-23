#include<stdio.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);

    int a[n];
    int i;
    printf("Enter Element:");
    for(i=1;i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int max=a[0];
    for(i=1;i<n; i++)
    {
        if(a[i]>max)
        max=a[i];

    }
    printf("%d",&max);
}