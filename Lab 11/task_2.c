/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  27/11/23
  Purpose       :  Task 11_2 to get know about the break command
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void SumNum(int);
  void main(){
    SumNum(1);
  }
  void SumNum(int j)
  {
int num=10;
int q=0,sum=0;
for (int i = 0; i < num; i++)
{
   printf("Enter the Number%d >>",i+1);
   scanf("%d",&q);
   if (q<0){break;}
   sum=sum+q;
}
 printf("Sum is %d",sum);
  }