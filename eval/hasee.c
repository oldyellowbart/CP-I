#include<stdio.h>

int main(){
    // int a=15,*p=&a;
    // printf("\nAdresse pf a = %p=",&a);
    // printf("\nvalue of a is %d",a);
    // printf("\nadress of a=%p=",p);
    // printf("\nvalue of p is %d",*p);



    int var[]={10,100,200};
    for (int i = 0; i < 3; i++)
    {
         int *p=&var[i];
         printf("\nthe adress of the value of %d is %p ",var[i],p);
    }
    
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {   
         printf("\nthe adress of the value of %d is %p ",var[i],&var[i]);
    }
    
   
}
