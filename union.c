#include<stdio.h>
int main()
{
    int n1,n2;
    int i,j;
    int c;

    printf("Enter size of Set1 for no. of values:");
    scanf("%d",&n1);

    printf("Enter size of set2 for no of values:");
    scanf("%d",&n2);

    int a[n1];
    int b[n2];
    int prev;
    int z=0;
    printf("Enter values for set1\n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
        prev=a[i];
        
        
    }

    printf("Enter values for set2\n");
    for ( j = 0; j < n2; j++)
    {
        scanf("%d",&b[j]);
    }

   printf("Intersection");
   for ( i = 0; i <n1; i++)
    {
        for (j =0 ; j <n2; j++)
        {
            if (a[i]==b[j])
            {
               printf("% d",a[i]);
            }
            
        }
        
        
    }
    printf("/n");

   //union
   for ( i = 0; i <n1; i++)
    {
        printf("%d",a[i]);
        for (j =0 ; j <n2; j++)
        {
            if (a[i] == b[j])
            {
               printf("%d",a[i]);
            }
            else
            {
                printf("%d",a[i])
            }
            
            
        }

        /*for (j =0 ; j <n2; j++)
        {
            if (a[i] != b[j])
            {
              
            }
            
            
        }*/
        
        
    }*/
    
    
    
}