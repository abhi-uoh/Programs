#include<stdio.h>
int main()
{

  int n,n1;
  int i,j;
  int r,c;
  printf("Enter size of row:");
  scanf("%d",&n);
  printf("Enter size of column:");
  scanf("%d",&n1);
  int a[n][n1];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n1;j++)
    {
      printf("Enter element in Array[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("Martrix\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n1;j++)
    {
      printf("%5d",a[i][j]);
    }
    printf("\n");

  }
  float sum=0;
  float avg=0;
  for(i=0;i<n;i++)
  {
    sum=0;
    avg=0;
    for(j=0;j<n1;j++)
    {
      sum=sum + a[i][j];
    }
    avg= sum / n1;
    printf("average of row:%f\n",avg);
  }
  printf("\n\n");

  for(i=0;i<n1;i++)
  {
    sum=0;
    avg=0;
    for(j=0;j<n;j++)
    {
      sum=sum + a[j][i];
    }
    avg= sum / n;
    printf("average of column:%f\n",avg);
  }
  printf("Transpose of matrix:\n");
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%5d",a[j][i]);

    }
    printf("\n");
  }
  int max;
  int min=0;
  max=a[0][0];
  for(i=1;i<n;i++)
  {
    for(j=0;j<n1;j++)
    {
    if(a[i][j]>max)
    {
        max=a[i][j];
    }
    }

  }
  printf("maximum of a matrix ROW:%d\n",max);

}
