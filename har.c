#include<stdio.h>
int main()
{
    float  i , h , a;
  
    int n;
    
    printf("Enter the value of n , -1 for exit :");
    scanf("%d",&n);
    
    while(n != -1)
    {

        float tot = 0 ;
        for(i = 1 ; i <= n ; i++)
        {
           printf("Enter your value:\n");
           scanf("%f",&a);
           tot = tot +(1/a);
        }
        h = n/(tot);
        printf("Harmonic of n data values is:%f\n",h);
        printf("Enter the value of n , -1 for exit :");
	    scanf("%d",&n);
        
    }
    
    
}
