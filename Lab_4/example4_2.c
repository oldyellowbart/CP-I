#include<stdio.h>
int main()
{
    int a=150,b=20;
    double q , r;
    q = a/b;
    r = (double)a/b;
    printf("the value of q without type cast is %f\n",q);
        printf("the value of q with type cast is %f\n",r);
        return 0;


}