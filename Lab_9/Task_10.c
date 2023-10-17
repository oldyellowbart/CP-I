/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_10 to get know about the loops
                   and print the factorial  of given number using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
        void fact(int);
void main()
{
int a=0;
printf("enter the number>>>");
scanf("%d",&a);
fact(a);
}
        void fact(int q)
        {
            if (q==0)
            {
                printf("01=0\n");
            }
            else if (q<0)
            {
               printf("Enter a valid / positive number\n");
            }
            else if (q>0)
            {
                int r=1;
        for (int i=0; i < q; i++)
        { 
        r=r*(q-i);
        }
        printf("%d!=%d",q,r);
        };
        }