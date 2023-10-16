/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  Task 9_4 to get know about the loops
                    and print the table of given number at the given line 
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void table(int,int);
void main()
{
    int a=0,b=0;
    printf("enter a number >>");
    scanf("%d",&a);
    printf("enter a limit  >>");
    scanf("%d",&b);
    table(a,b);
}
void table(int d,int q)
{
    int c=1,f=0;
    while (c<q+1)
    {
        f=d*c;
        printf("%d*%d=%d\n",d,c-1,f,++c);
    }
}