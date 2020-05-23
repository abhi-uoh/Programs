#include<stdio.h>
int main()
{
    int  n1,n2;
    int a=0;
    int c=0;
    int b;
    int i;
    printf("Enter N1:");
    scanf("%d",&n1);
    printf("Enter N2:");
    scanf("%d",&n2);
    int temp1=n1;
    int temp2=n2;
    int count=0;
    if(n1>n2)
    {
        
        b=n2;
        for(i=0;i<n1;i++)
        {
             c=a+b;
             printf(" %d",c);
             a=b;
             b=c;

             if(temp1==c || temp2==c)
             {
                count++;
             }

            
         
        }
        if(count==2)
        {
            printf("fibo");
        }
        else
        {
            printf("Not fibo");
        }


    }
    
    else 
    {
        printf("%d No is Greater\n",n2);
         b=n1;
        for(i=0;i<n2;i++)
        {
             c=a+b;
             printf(" %d",c);
             a=b;
             b=c;

             if(temp1==c || temp2==c)
             {
             count++;
             }

        }
        if(count==2)
        {
            printf(" fibo\n");
        }
        else
        {
            printf(" Not fibo\n");
        }

       
    }
    
}