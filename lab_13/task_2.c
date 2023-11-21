/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  21/11/2023
  Purpose       :  Task task 13_2.c to swap data by pointer method memory adressing 
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void four_operation(float,float,float*,float*,float*, float*);
  
  void main()
  {
    float a=0,b=0,c=0,d=0,e=0,f=0;
    printf("\nEnter the  first operand (A) ===>");
    scanf("%f",&a);
    printf("\nEnter the second operand (B) ===>");
    scanf("%f",&b);
    four_operation(a,b,&c,&d,&e,&f);
    printf("\n Sum of  first and second  operand (A+B) ===>%f",c);
    printf("\n diffrence of  first and second  operand (A-B) ===>%f",d);
    printf("\n product of  first and second  operand (A*B) ===>%f",e);
    printf("\n quotient of  first operand to  second  operand (A/B) ===>%f",f);
  }
  void four_operation(float q,float r,float*s,float*t,float*u, float *v)
  {
float sum;
sum = q+r;
*s=sum;
float sub = q-r;
*t=sub;
float multiply = q*r;
*u=multiply;
float divider = q/r;
*v=divider;
  }