/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  T6ask 9_1 to get know about the user defined function
                    and loops and print no of stars
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void abc(int);
void main()
{
    int a=0;
    printf("enter a number >>");
    scanf("%d",&a);
    abc(a);
}
void abc(int d)
{
    int c=0;
    while (c<d){printf("*\n",c++);}
}