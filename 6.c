#include<stdio.h>

int main()
{
    double n;
    int k;
    printf("Enter a positive fractional number, and the accuracy up to which you require the binary representation of its fraction - \n");
    scanf("%lf%d", &n, &k);

    if(n < 0 || k < 0 )
    {
        puts("Invalid Input.");
        return 0;
    }

    int num = n, bin_num = 0, factor = 1;

    while(num > 0)
    {
        int digit = num % 2;
        bin_num += digit * factor;
        num /= 2;
        factor *= 10;
    }

    printf("%d.", bin_num);
    double num_fraction = n - (int)n;

    int count = 1;
    while(count <= k)
    {
        num_fraction *= 2;
        printf("%d", (int)num_fraction);
        if(num_fraction >= 1)
            num_fraction -= 1;
        count++;
    }
    printf("\n");
}
