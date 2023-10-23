/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  23/10/23
  Purpose       :  Task task_3.c to get know about the nested loops
                    and print diamond of star  from given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star_format_3(int);                       //function declearation
  void main(){                                  //main function
    int a=0;                                   //variable intialization and declearation 
    printf("ENTER THE LIMIT OF NUMBER\n");    //user input of the stars
    scanf("%d",&a);                          //memory allocation and storage
    star_format_3(a);}                      //function intialization
 void star_format_3(int q ){               //function body
     for (int i = 0; i < q; i++){                 //upper half loop
     for (int j = q; j >= i; j--){printf(" ");}  //decreasing spaces
     for (int h = 0; h <= i; h++){printf("*");} //increasing stars
     for (int t = 0; t < i; t++){printf("*");} //increasing stars
     printf("\n"); }                          // upper half line juump
     for (int d = 1; d < q; d++){                   //lower half loop
     for (int l = 0; l-1 <= d; l++){printf(" ");}  //increasing spaces
     for (int y = q; y-1 >= d; y--){printf("*");} //decreasing stars
     for (int u = q ; u-1 > d; u--){printf("*");}//decreasing stars
     printf("\n");}}                            //lower half line jump