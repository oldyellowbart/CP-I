/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/27/2023
  Purpose       :  task 14_2  to print number of digits  using  recursion
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int Number_of_Digits (int );
  int main ()
  {
    int num = 0;
    printf("Enter any number =>> ");
    scanf("%d",&num);
    printf("Number of digits are %d",Number_of_Digits(num));
  }
  int Number_of_Digits (int q)
  {
    if (q == 0){return 0;}
    if (q<10){return 1;}
    return 1 + Number_of_Digits(q/10);
  } 