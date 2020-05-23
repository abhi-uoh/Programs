#include<stdio.h>
#include <math.h>
#include <string.h>
int main()
{
  printf("Enter the  length of string\n");
  int n;
  scanf("%d\n",&n);
  printf("Enter the string\n");
  char a[n];
  scanf("%s",a);
  //char a[4] = "1234";
  //int len  = 3,x,d,sum=0;
  int len = n-1;
  int x,d,sum=0;
  char ch;
  for(int i = 0 ; i < len ;i++)
  {
    ch = a[i];
    x = ch - '0';
    d = pow(10,len);
    sum = sum + x*d;
    len --;
  }
  printf("Sum = %d\n",sum);
  return 0;
}
