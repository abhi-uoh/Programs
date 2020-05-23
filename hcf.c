#include<stdio.h>
int main()
{
int a,b;
int h;
printf("Enter n1:");
scanf("%d",&a);
printf("Enter n2:");
scanf("%d",&b);
for(h=a<b?a:b; h>=1;h--)
{
    if(a%h==0 && b%h==0)
    {
    
        break;
    }
}
printf("%d",h);
}

