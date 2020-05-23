#include<stdio.h>
void main()
{
    float  i , h , a;
    int n = 0 ;
    
    printf("enter the value of n , -1 for exit :");
    scanf("%d\n",&n);
    
    while(n != -1)
    {
	    
        float tot = 0 ;
        for(i = 1 ; i <= n ; i++)
        {
           printf("enter your value:\n");
           scanf("%f\n",&a);
           tot = tot +(1/a);
        }
        h = n/(tot);
        
    }
    printf("Harmonic of n data values is:%f\n",h);
    printf("enter the value of n , -1 for exit :");
	scanf("%d\n",&n);
}
