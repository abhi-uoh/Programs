#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value a:\n");
	scanf("%d",&a);
	printf("Enter value b:\n");
	scanf("%d",&b);
	if(a==0 && b==0)
	{
		printf("invalid \n");

	}
	for (int i = a; i <=b; i++)
	{
		if (a%b==0)
			 printf("success!\n");

	}
   
}