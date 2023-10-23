/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  23/10/23
  Purpose       :  Task example.c to get know about the loops
                    and print the  of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
 void main(){
    int count =9;
   for (int i = 0; i < count; i++)
   {
      for (int j = 0; j < i; j++)
      {
        printf("*");
      }
      printf("\n");
   }
   
  }