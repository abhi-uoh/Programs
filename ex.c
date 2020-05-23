#include<stdio.h>
int main()
{
	int n,i=0;
    printf("\n Enter value else input -1 to stop\n");
    scanf("%d",&n);
    while(n!=-1)
    {
    	i=i*10+n;
    	scanf("%d",&n);


    }
    printf("%d\n",i);
	
	return 0;
}