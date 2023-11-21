#include<stdio.h>
void main(){
 int a=100,b=200;
 
 printf(" value of a = %d\n",a);
 printf(" value of b = %d\n",b);
 printf("adress  of a = %p\n",a);
 printf("adress  of b = %p\n",b);  
 int *ptr =&a;  
 int *ptr1 =&b;
printf("adress of  value of a = %p\n",&a);
printf("adress  of value of b = %p\n",&b); 

}
