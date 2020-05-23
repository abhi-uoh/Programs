#include<stdio.h>
#include<string.h>
int main()
{
  char s[100];
  int i;
  printf("Enter the name:\t");
  gets(s);
  // printf("Name printed:%s\n",s );
  int l=strlen(s);
  for(i=0;i<l;i++)
  {
    printf("%c\n",s[i]);
  }
  return 0;

  strrev(s);
  printf("reverse :%5s",s );

}
