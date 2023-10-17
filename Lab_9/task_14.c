/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_14 to get know about the loops
                   and print the datesheet with ampersend and percentage sign using for  do while loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void pass( int);
  void main()
  {
     const unsigned int  r=101325;
       pass(r);
  }
void pass(int q){
    int l=0;
    do
    {   printf("Enter a 6 digit Password\n ");
       scanf("%d",&l);
       if (l==q){printf("Haseeb");}
       else{printf("wrong password\n");}
    } while (l!=q);
    }