#include<stdio.h>
int n;
void scanN()
{
  printf("Enter N:");
  scanf("%d",&n );
}///scanning n ends here
int a[n];
int i;
void scanElement()
{
  for(i=0;i<n;i++)
  {
    printf("Enter Element :\t");
    scanf("%d",&a[i]);
  }
}//scanning ends here

void sortingElement()
{
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
}//sorting ends here

int main()
{
  scanN();
  scanElement();
  sortingElement();
}
