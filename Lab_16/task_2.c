/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/12/2023
  Purpose       :  task_2  to get know about the array in user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int xy_array(int *x_array, int *y_array )
  {
    int a=0;
    a=(x_array[0]*y_array[1])-(x_array[1]*y_array[0]);
    return a;
  }
  void xyz_array(int *x_array, int *y_array, int *z_array )
  {
    int a=0,b=0,c=0, d=0;
    printf("    |a11   a12   a13| = |%2d %2d %2d|\n",x_array[0],x_array[1],x_array[2]);
    printf("A = |a21   a22   a23| = |%2d %2d %2d|\n",y_array[0],y_array[1],y_array[2]);
    printf("    |a31   a32   a33| = |%2d %2d %2d|\n",z_array[0],z_array[1],z_array[2]);
    a=xy_array(y_array[0][1],z_array[0][1]);
    b=xy_array(y_array[0][2],z_array[0][2]);
    c=xy_array(y_array[1][2],z_array[1][2]);
    d=(a*x_array[0])-(b*x_array[1])+(c*x_array[2]);
    printf("%d",d);
  }
  void main()
  {
int array_a[3];
int array_b[3];
int array_c[3];
for (int i = 0; i < 3; i++){
    printf("Enter a1%d >>\n",i+1);
    scanf("%d",&array_a[i]);
    printf("Enter a2%d >>\n ",i+1);
    scanf("%d",&array_b[i]);
    printf("Enter a3%d >>\n ",i+1);
    scanf("%d",&array_c[i]);}
xyz_array(array_a,array_b,array_c);}
