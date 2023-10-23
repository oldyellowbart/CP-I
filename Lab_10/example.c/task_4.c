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
 void star_format_3(int q ){
    for (int i = 0; i < q; i++)
    {

        for (int j = q; j >= i; j--)
        {
            printf(" ");
        }
        
         for (int h = 0; h <= i; h++)
      {
        printf("*");

      }
      for (int t = 0; t < i; t++)
      {
        printf("*");
      }
      
     printf("\n"); // lower half
    }
     for (int d = 1; d < q; d++)
    {

         for (int l = 0; l-1 <= d; l++){printf(" ");}
         for (int y = q; y-1 >= d; y--){printf("*");}
         for (int u = q ; u-1 > d; u--){printf("*");}
      //lower
      
     printf("\n");
    }
   
   
  }