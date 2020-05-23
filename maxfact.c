#include<stdio.h>
int main()
{
  int n;
  printf("Provie positive N:");
  scanf("%d",&n);
  if(n<0)
  {
    printf("invalid input");
    return 0;
  }
  int fact;
  int pvalue=1;
  int i;
  for(i=0;i<n;i++)
  {
    fact=fact*i;
    if(n%fact==0)
    {
      pvalue=fact;
    }
  }
  printf("Maximum factorial number which will divide:%d",fact);

}
