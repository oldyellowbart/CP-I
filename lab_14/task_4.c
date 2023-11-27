/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/27/2023
  Purpose       :  task 14_4  to least  common multiple  using  recursion
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  
  int lcm (int q , int r )
  {
if (r==0){return q;}
return  lcm(r,(q*r)/(q%r));
  
  }
  int main()
  {
    int a=0,b=0;
    printf("Enter a 1st Number =>>");
    scanf("%d",&a);
    printf("Enter a 2nd Number =>>");
    scanf("%d",&b);
    printf("The Lcm is %d",lcm(a,b));
  }
