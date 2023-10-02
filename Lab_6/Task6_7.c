/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To find ratio of two given numbers given numvber using the if else satement  only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int main(){
    int a;
    printf("Enter your CP-I lab marks >>");
    scanf("%d",&a);
    if (a<0){printf("You enterd invalid marks out of 100");}
    else if (a>100){printf("You enterd invalid marks out of 100");}
    else if (a<100)
    {printf("You obtained %d marks in CP-I lab ",a);}
    return 0;
  }