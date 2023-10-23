/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  23/10/23
  Purpose       :  Task task_3.c to get know about the loops
                    and print the  of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star_format_3(int);
  void main(){
    int a=0;
    printf("ENTER THE LIMIT OF NUMBER\n");
    scanf("%d",&a);
    star_format_3(a);}
 void star_format_3(int count ){
   for (int i = 0; i < count; i++)
   {
      for (int j = 0; j < i; j++)
      {
        printf("*");
        
      }
      printf("\n");
      }
for (int i = 0; i < count; i++)
  {
    for (int j = count ; j > i; j--)
    {
        printf("*");
    }
    printf("\n");
  }
   
  }