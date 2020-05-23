#include<stdio.h>
int main()
{
  int n;
  int rem;
  int b=0;
  int i=1;

//decimal to binary
  printf("Enter number:");
  scanf("%d",&n );
  while(n!=0)
  {
    rem=n%2;
    n=n/2;
    b=b+(rem*i);
    i=i*10;


  }

  //binary 2 decimal
  printf("%d\n",b);
  int r;
  int bin=0;
  int base=1;

  while(b)
  {
    r=b%10;
    bin=bin+(r*base);
    base=base*2;
    b=b/10;

  }
  printf("%d\n",bin);
}
