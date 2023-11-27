/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/27/2023
  Purpose       :  task 14_3  to greatest common divisor  using  recursion
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int GCD (int q,int r)
  {
    if (r==0){return q;}
    return  GCD(r,q%r);
  }
  int main()
  {
    int a=0,b=0;
    printf("Enter the 1st number>> ");
    scanf("%d",&a);
    printf("Enter the 2nd  number>> ");
    scanf("%d",&b);
    printf("The greatest common divisor is %d",GCD(a,b));
  }