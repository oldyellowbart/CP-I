/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_7 to get know about the loops
                   and print the table  of given number using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void table(int);
    void main()
        {int a=0;
        printf("Enter the number>>>");
        scanf("%d",&a);
        table(a);}
void table(int q){
int l=0;
for (l=0; l < 10;l++){printf("%dx%d=%d\n",q,l+1,q*(l+1));}}