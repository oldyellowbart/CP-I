#include<stdio.h>
#define SUM(a,b,c) a+b+c
#define SQR(c) (c)*(c)
int main()
{
int x = SQR(2+3);
int y = SUM(3,2,5);
printf("The value of x  is %d",x);
printf("\nThe  value of y is %d",y);
return 0;
}