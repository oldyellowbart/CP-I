/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  21/11/2023
  Purpose       :  Task task 13_1.c to swap data by pointer method memory adressing 
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
void circleshift(int*,int*,int*);
void main()
{
    int a=0,b=0,c=0;
    printf("\nEnter value for  A >>");
    scanf("%d",&a);
    printf("\nEnter value for  B >>");
    scanf("%d",&b);
    printf("\nEnter value for  C >>");
    scanf("%d",&c);
    circleshift(&a,&b,&c);
     printf("Value of A after swaping is %d\n",a);
     printf("Value of B after swaping is %d\n",b);
     printf("Value of C after swaping is %d\n",c);
}
void circleshift(int*x,int*y,int*z)
{
    int temp;
    int temp2;
    temp=*x;
    *x=*z;
    *z=temp;
    temp2=*y;
    *y=*z;
    *z=temp2;
}