#include <stdio.h>

int main()
{
    int x=15;
    int* y;
    y=&x;
    printf("address of x is %p\n",&x);
    printf("value in y is %p\n",y);
    printf("%d\n",sizeof(y));
    printf("%d\n",*&x);
    printf("%d\n",*y);
}