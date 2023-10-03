/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  03/10/23
  Purpose :  To asign grade based on marks using  if else satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a=0;
    printf("Enter CP-1 Lab Marks >>");
    scanf("%d",&a);
    if (a>=80 && a<=100){printf("You Earned  Grade point 'A'");}
    else{}
    if (a>=70 && a<80){printf("You earned Grade 'B'");}
    else{}
    if (a>=60 && a<70){printf("You earned Grade 'C'");}
    else{}
    if (a>=50 && a<60){printf("You earned Grade 'D'");}
    else{}
    if (a>=0 && a<50){printf("You earned Grade 'F'");}
    return 0;
}