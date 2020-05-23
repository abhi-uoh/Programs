#include<stdio.h>
int main()
{
  int rowi,
  int columj;
  int 
  int n;
  printf("Enter Number of Rows:");
  scanf("%d",&n);
  if (n<1) {
    printf("Invalid input");
    return 0;
  }

  for(rowi=1;rowi<non; rowi++)
  {
    for(spacej=0;spacej<(no-rowi);spacej++)
    {
      printf(" ");
    }
      for(col=0;col<=row;col++)
      {
        printf("%2d",n);
        n=n*(row-col)/(col+1);

      }

  }
}
