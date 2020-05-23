#include<stdio.h>
int max(int x,int y, int z);

int main()
{
  printf("%d\n",max(4,3,7));
  return 0;
}
int max(int x,int y, int z)
{
  int max;
  max=x;
  if(y>max)
  {
    max=y;
  }
  if(z>max)
  {
    max=z;
  }
  return max;
}
