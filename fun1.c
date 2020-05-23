
//no return type and no argument;

#include<stdio.h>
void checkprime();
int main()
{
  checkprime();
  return 0;

}
 void checkprime()
 {
   int n;
   int i;
   int flag=0;
   printf("Enter N:");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
     if (n%i==0)
     {
       flag=1;
     }
   }
   if (flag==1)
   {
     printf(" Not Prime Number:\n");
   }
   else
   {
     printf("prime Number\n");
   }
 }
