/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/12/2023
  Purpose       :  task_1  to get know about the array
  Disclaimer    :  open source Code has been writen for educational purpose only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void x_array(int *x_array, int *y_array )
  {
    printf("A = |a11| |a12| = |%d %d|\n",x_array[0],x_array[1]);
    printf("    |a21| |a22| = |%d %d|\n",y_array[0],y_array[1]);
    printf("Determinant of Matrix A \nDet(A) = %d",(x_array[0]*y_array[1])-(x_array[1]*y_array[0]));
  }
  void main()
  {
int array_a[2];
int array_b[2];
for (int i = 0; i < 2; i++){
    printf("Enter a1%d >>\n",i+1);
    scanf("%d",&array_a[i]);
    printf("Enter a2%d >>\n ",i+1);
    scanf("%d",&array_b[i]);}
x_array(array_a,array_b);}


  
