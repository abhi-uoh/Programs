#include<stdio.h>
int main()
{
  int n;
  printf("Enter N:");
  scanf("%d",&n );
  int a[n];
  int i;
  printf("Enter Element\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  //int sort=a[0];
  int j;
  int temp=0;

  for(i=0;i<n;i++)
  {
    for(j=1;j<n;j++)
    {
      if(a[j]<a[j-1])
      {
        temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
      }


    }
  }

  printf("sorted Array element" );
  for(i=0;i<n;i++)
  {
    printf("%5d",a[i]);
  }


  //binary search
  int k;
  printf("\nEnter k:");
  scanf("%d",&k );

  int l=0;
  int r=n-1;
  int mid=((l+r)/2);
  int s=0;
  while(l<=r)
  {
    mid = ((l+r)/2);
    if(a[mid]<k)
      l=mid+1;
    else if (a[mid]>k)
      r=mid-1;
    else if(a[mid]==k)
      s=1;
      break;
  }
  if (s==1) {
    /* code */
    printf("searching value %d found",k );
  }
  else{
    /* code */
    printf("searching value %d  not found",k );
  }



}
