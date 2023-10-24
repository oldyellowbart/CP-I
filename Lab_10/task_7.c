/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  24/10/23
  Purpose       :  Task task_7.c to get know about the nested loops
                    and print matrix  till given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void matrix(int,int);
  void main(){
    int a=0,b=0;
    printf("Enter the number of rows >>");
    scanf("%d",&a);
    printf("Enter the number of columns >>");
    scanf("%d",&b);
    matrix(a,b);}
  void matrix(int q,int r){
int j=0;
    for (int i = 0; i < q ; ++i)
    {
        for (int m = 0; m < r; ++m)
        {
            
            printf("%d\t",j+1);
          j++;
        }
        printf("\n");
    }
    
  }
    
