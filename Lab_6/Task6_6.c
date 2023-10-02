/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To find ratio of two given numbers given numvber using the if else satement  only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int main(){
    float  a,b;
        printf("Enter 1 number >>");
        scanf("%f",&a);
        printf("Enter 1 number >>");
        scanf("%f",&b);
                if (b==0 ){printf("Division by zero is not possible");}
                else if (b!=0)
                {
                    printf("The ratio of %.1f to %.1f is %.2f",a,b,a/b);
                }
             return 0;  
  }
