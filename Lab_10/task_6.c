/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  24/10/23
  Purpose       :  Task task_6.c to get know about the nested loops
                    and print series of number  till given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void number_sequence(int);
  void main(){
    int a=0;
    printf("Enter the number>>");
    scanf("%d",&a);
    number_sequence(a);}
  void number_sequence(int q){
    for (int i = 0; i < q; i++){
                                for (int j =0; j <= i; j++){printf("%d",j+1);}
    printf("\n");}}
