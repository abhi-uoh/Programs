#include<stdio.h>
#include<string.h>
int main()
{
  int n,x=0,c=0;
  printf("N:");
  scanf("%d",&n );
  while(n!=0)
  {
    c++;
    n=n/10;
  }
  printf("count:%d",c);
}
