#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  char d[100];
  int n=5;
  int k[n];
  int i;int j=0;
  printf("Enter String:");
  gets(s);

  for(i=0;i<n;i++)
  {
    printf("Enter element:\t");
    scanf("%d",&k[i]);
  }
  int l=strlen(s);
  for(i=l-1;i>=0;i--)
  {
      printf("%c",s[i]);
      // d[j]=s[l-i];
      // j++;

  }
  for(i=n-1;i<=0;i--)
  {
    printf("%d\t",k[i]);
  }
  // printf("%s",d );
  // for(j=0;j<l;j++)
  // {
  //   printf("reverse %c",d[j] );
  // }
}
