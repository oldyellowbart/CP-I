/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_7 to get know about the loops
                   and print the square quobe  given number using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
        void square(int);
                    void main()
                    {
                    int a=0;
                    printf("Please enter a number to view  square and qube >>");
                    scanf("%d",&a);
                    square(a);
                    }
        void square(int q)
        {
        printf("NUMBER\t\tSQUARE\t\tQUBE\n");
        for (int i = 0; i < q; i++)
        {
        printf("%d\t\t%d\t\t%d\n",i+1,(i+1)*(i+1),(i+1)*(i+1)*(i+1));   
        }
        }