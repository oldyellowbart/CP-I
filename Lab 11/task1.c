/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  27/11/23
  Purpose       :  Task 11_1 to get know about the break command
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void isprime(int);
void main()
 {
    int a=0;
    printf("Enter the number >>");
    scanf("%d",&a);
    isprime(a);
 }
void isprime(int q)
 {
  int j =0,k=0;
  j=q%2;
  k=q%3;
  if(j<=0){printf("Enter a positive integer");}
  else if (j==0 || k==0){printf("You Entered a composite Number") ;}
  else {printf("You Entered a prime Number");}

 }