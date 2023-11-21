#include<stdio.h>
int swap(int ,int);
int temp =0;
int r=0;
void main()
{
 int a=100,b=200;
 printf("Before swap value of a = %d\n",a);
 printf("Before swap value of b = %d\n",b);
 swap(a,b);
 printf("after swap value of a = %d\n",temp);
 printf("after swap value of b = %d\n",r);    
}
int swap(int q,int r)
{
    temp=q;
    q=r;
    r=temp;
    return temp,r;
}