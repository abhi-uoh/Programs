#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i;
  for(i=1;i<=30;i++)
  {
    printf("%10d",1+(rand()%8));
    if(i%5==0)
    {
      puts("");
    }
  }

}
 
