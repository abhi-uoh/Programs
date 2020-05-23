//no return type with argument

#include<stdio.h>
void checkprime(int n);
int main()
{
  int n;
  printf("Enter N:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("Invalid Input");
    return 0;
  }
  checkprime(n);

}
void checkprime(int n)
{
  int i;
  int flag=0;
  for (i=2; i<n/2; i++)
  {
    if (n%i==0)
     {
      flag=1;
    }
  }
  if (flag==1)
  {
    printf("Number is not prime\n");

  }
  else
  {
  printf("Number is prime");
  }



}
