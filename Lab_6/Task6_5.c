/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To find square root of a given numvber using the if  and else  satement  only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  #include<math.h>
  int main(){
        float a,b;
        printf("Enter the Number =");
        scanf("%f",&a);
         if (a>0 ){b=a;}
                else if (a<0){b=-a;}
        printf("The Square root of number is %.2f",sqrt(b));
        return 0;
  }
