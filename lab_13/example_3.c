#include<stdio.h>
void main()
{
    int x=40;
    int *ptr =&x;
    int y=*ptr;
    printf("Value of x is %d\n",x);
    printf("adress of x is %p\n",ptr);
    printf("adress of x is %p\n",&x);
    printf("Value at the adress stored in ptr is %d\n",y);
    printf("Value at the adress stored in ptr is %d\n",*ptr);
}                         