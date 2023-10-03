/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  02/10/23
  Purpose :  To find area of the triangle using nested if else satement  only
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  #include<math.h>
  int main()
  {
    float a,b,c,e ;
    float d ;
    printf("Enter the 1st side of traingle");
    scanf("%f",&a);
    printf("Enter the 2nd side of traingle");
    scanf("%f",&b);
    printf("Enter the 3rd side of traingle");
    scanf("%f",&c);
   d=(a+b+c)/2;
   e=sqrt(((d-a)*(d-b)*(d-c))*d);
   if ((a+b)>c){if ((a+c)>b){if ((b+c)>a){printf("The area of triangle is %.2f",e);}else{printf("the area is invalid");}}else{printf("the area is invalid");}}
   else{printf("the area is invalid");}
return 0;
  }