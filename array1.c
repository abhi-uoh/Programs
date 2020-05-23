#include<stdio.h>
int max(int [], int);
int min(int [],int);
// int sort();
int search(int [],int,int);

int main()
{
 int i;
 int n;
 printf("Enter N:");
 scanf("%d",&n);
 int a[n];
 printf("Enter Element in Array\n");

 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
   printf("Enter search value:");
   int k;
   scanf("%d",&k);

  int b=max(a,n);
  int sec=search(a,n,k);
  if (sec==1) {
    printf("value found");
  }
  else
  {
    printf("value not found");
  }
  printf("\n max: %d",b );
  printf("\n min: %d",min(a,n));
  printf("",sec);
  // int sort();
  // int search();

}
int max(int a[],int n)
{
  int i;
  int max=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]>max)
    max=a[i];

  }
  return max;
}

int min(int a[],int n)
{
  int i;
  int min=a[0];
  for(i=1;i<n;i++)
  {
    if(a[i]<min)
    min=a[i];
  }

  return min;
}

int search(int a[],int n,int k)
{
  int i;

  for(i=0;i<n;i++)
  {
    if (a[i]==k) {
      return 1;

    }
  }

}
