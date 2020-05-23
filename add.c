#include<stdio.h>
int main()
{

  int n,n1;
  int i,j;
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
  //Average of row
  float sum = 0;
  float avg= 0;
  float avg1=0;
  int flag = 0;
  float sum1 = 0;
  int k;
  for(i=0;i<n;i++)
  {
    sum=0;
    avg=0;
    avg1=0;
    for(j=0;j<n1;j++)
    {
      sum=sum + a[i][j];
      if(flag == 0){
        for(k = 0; k < n; k++){
          sum1 = sum1 + a[j][k];
        }
        avg1 = sum1/n;
        printf("average of column:%f\n",avg1);
      }

    }
    flag = 1;
    avg= sum / n1;
    printf("average of row:%f\n",avg);

  }

  // for(j=0;j<n1;j++)
  // {
  //   sum=0;
  //   avg=0;
  //   for(i=0;i<n1;i++)
  //   {
  //     sum=sum + a[j][i];
  //   }
  //   avg= sum / n;
  //   printf("average of column:%f\n",avg);
  // }

}
