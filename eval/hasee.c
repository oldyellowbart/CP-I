#include<stdio.h>

int main(){
    // int a=15,*p=&a;
    // printf("\nAdresse pf a = %p=",&a);
    // printf("\nvalue of a is %d",a);
    // printf("\nadress of a=%p=",p);
    // printf("\nvalue of p is %d",*p);



    // int var[]={10,100,200};
    // int *p=&var[2];
    // for (int i = 0; i < 3; i++)
    // {   
    //      printf("\nthe adress of the value of %d is %p ",*p,p);
    //      p --;
    // }
    // printf("\n\n");
    // for (int i = 0; i < 3; i++)
    // {   
    // printf("\nthe adress of the value of %d is %p ",var[i],&var[i]);
    // }
    // int *p = NULL;
    // printf("%p",p);
    // printf("\n%d",*p); // show null 7 element and sum using pointer
    


    // int var[]={10,100,200};
    // int (*p)[3]=&var;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n %p",p[i]);
    //     printf("\n %d",(*p)[i]);
    //     ;
    // }
    



    // int array[7];
    // int *p=array;
    // int sum =0;
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("Enter the %d value>> ",i+1);
    //     scanf("%d",&array[i]);
    //     sum = sum+*p;
    //     p++;
    // }
    // printf("Sum is %d",sum);


                            // char array[7];
                            // char *ptr=&array[7];
                            // printf("Enter word >> ");
                            // scanf("%c",array);
                            // for (int  i = 0; i < 7; i++)
                            // {
                            //     printf("%c",*ptr);
                            //     ptr--;
                            // }  




                            int a=45;
                            int *q=&a;
                            int **r=&q;
                            int ***s=&r;
                            printf(" adress = %p_\t_value = %d",a,a);   
                            printf(" \n adress = %p_\t_value = %d",q,*q);
                            printf(" \n adress = %p_\t_value = %d",r,**r);
                            printf(" \n adress = %p_\t_value = %d",s,***s);
                               
}
