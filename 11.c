#include<stdio.h>
int main()
{
    int temp=0,x=10,y=20,z=30;
    x=temp;;
    x=y;
    y=z;
    z=temp;
    printf("x:%d\ny=%d\nz=%d",x,y,z);
}
