/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_7 to get know about the loops
                   and print the table  of given number a nd also the limit b using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
        void tableadvance(int,int);
                    void main()
                    {
                    int a=0,b=0;
                    printf("Enter a number >>");
                    scanf("%d",&a);
                    printf("Enter the limit >>");
                    scanf("%d",&b);
                    tableadvance(a,b);
                    }
        void tableadvance(int q,int r)
        {
        for (int i = 1;i < r+1; i++)
        {
        printf("%d\tx\t%d\t=\t%d\n",q,i,q*i);
        }
        }