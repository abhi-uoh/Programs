#include<stdio.h>
int main()
{
  int n;
  int i;
  printf("provide N:");
  scanf("%d",&n );
  int a[n];
  int *p=&a[0];
  //p=&a[0];
  printf("Enter Number\n");
  for(i=0;i<=n;i++)
  {

    scanf("%d\n",&a[i]);
  }
  printf("address!\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }


//   int x=5;
//   int *p;
//   p=&x;
//   printf("%d\n",*p);
//
}
