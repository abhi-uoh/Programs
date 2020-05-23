//return type with no agrument
#include<stdio.h>
int checkprime();

int main()
{
  checkprime();
  return 0;

}

int checkprime()
{
  int i;
  int flag=0;
  int n;
  printf("Enter N:");
  scanf("%d",&n);
  for(i=2;i<n/2;i++)
  {
    if (n%i==0)
    {
      flag=1;
      break;
    }
  }
  if (flag==1)
   {
    printf("NOT Prime\n");
  }
  else
  {
    printf("Prime\n");
  }
  return 0;
}
