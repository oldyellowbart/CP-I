/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  23/10/23
  Purpose       :  Task task_1.c to get know about  nested the loops
                    and print the triangle of star of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star1(int);
  void main(){
    int a=0;
    printf("ENTER NUMBER ");
    scanf("%d",&a);
    star1(a);}
  void star1(int q){
  for (int i = 0; i < q; i++){
                              for (int j = q; j > i; j--){printf("*");}
    printf("\n");}}