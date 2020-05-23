#include<stdio.h>
int main()
{
  int n;
  int i;
  printf("Enter size of An Array!\n");
  scanf("%d",&n);
  // if (n<0) {
  //   printf("Invalid input:\n");
  //   return 0;
  // }

  int a[n];
  printf("Enter element in Array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  n--;
  int b[n];
  int j;
  printf("Reverse of Array\n");
  for(j=0;j<=n;j++)
  {
    b[j]=a[n-j];
    printf("%5d",b[j] );
  }
  puts("");

}
