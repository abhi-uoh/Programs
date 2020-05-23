#include<stdio.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);

    int a[n];
    int i;
    printf("Enter Element\n");
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int max=a[0];
    int min=a[0];
    for(i=1;i<n; i++)
    {
        if(a[i]>max)
        max=a[i];

    }
     printf(" Max :%d\n",max);
    
    for(i=1;i<n; i++)
    {
        if(a[i]< min)
        min=a[i];

    }
    printf(" Min :%d\n",min);
    int s;
    printf("Enter Searching value:");
    scanf("%d",&s);

    int z = 0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            z=1;
            break;
        }
        
    }
    if(z == 1)
    {
        printf("Searching value found");
    }
    else
    {
        printf("Searching value not found");
    }

    
}