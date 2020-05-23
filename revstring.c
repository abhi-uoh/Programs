#include<stdio.h>
int main()
{
  int n;
  printf("Enter N:");
  scanf("%d",&n );
  int a[n];
  int b[n];
  int j=0;
  int i;

  for(i=0;i<n;i++)
  {
    printf("Enter Element:\t");
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if (i%2==0) {
      a[j]=a[i];
    }
    else
    {
      a[j]=a[i];
    }
    j++;
  }
  for(j=0;j<n;j++)
  {
    printf("value at %d position=%d\n",j,a[j] );
  }

}
