#include<stdio.h>

int main()
{
    int n;
    printf("Enter the positive number ");
    scanf("%d", &n);

    if(n < 0)
    {
        puts("Invalid Input.");
        return 0;
    }

    for(int i = 0; i < n + 1; i++)
    {
        for(int j = 0; j <= i ; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j <= i ; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
