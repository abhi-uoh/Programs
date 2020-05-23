//return type with agrument
#include<stdio.h>
int checkprime(int n);
int main()
{
  int n;
  printf("Enter N:");
  scanf("%d",&n);
  checkprime(n);

}
int checkprime(int n)
{
  int i;
  int flag=0;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      flag=1;
    }
  }
  if (flag==1)
   {
    printf("Not Prime\n");
  }
  else
  {
    printf("Prime\n");
  }
  return 0;
}
