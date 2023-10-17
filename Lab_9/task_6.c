/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_6 to get know about the loops
                   and print the line of star using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void stars(int);
            void main()
            {
            int a=0;
            printf("Enter the Number>> ");
            scanf("%d",&a);
            stars(a);
            }
            
void stars(int q)
{
int f=0;
for (f; f<q; f++)
{
printf("*\n");
}
}