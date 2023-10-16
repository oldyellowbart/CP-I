/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  Task 9_5 to get know about the loops
                    and print the factorial  of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void fact(int);
void main()
{
    int a=0;
    printf("enter a number >>");
    scanf("%d",&a);
    fact(a);
}
void fact(int d)
{
    int c=0,f=1,g=0;
            if (d==0 || d<0)
            {
                if (d=0){printf("0! = 1");}
                else{printf("Enter  a positive number \n");}}
            else{while (c<d)
                        {
                            g=d-c;
                            f=g*d;
                            c++;
                        }      
                }
                printf("%d! = %d",d,f);
    

}