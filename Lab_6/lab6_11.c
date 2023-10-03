/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  03/10/23
  Purpose :  To print average based on marks using  if else satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
            printf("Enter the marks of Vector and Complex Analysis >>");
            scanf("%f",&a);
            printf("Enter the marks of Vector and Engineering Dynamics >>");
            scanf("%f",&b);
            printf("Enter the marks of Vector and Digital Logic Design >>");
            scanf("%f",&c);
            printf("Enter the marks of Vector and Computer Programing-1 >>");
            scanf("%f",&d);
            printf("Enter the marks of Vector and Electrical Machinery >>");
            scanf("%f",&e);
    f=(a+b+c+d+e)/5;
            printf("Average of five subject marks is : %.1f \n",f);
                if (f>=80){printf("') You are outstanding student.");}
                else{}
                if (f>=70 && f<80){printf("') You are good student.");}
                else{}
                if (f>=60 && f<70){printf("') You are average student.");}
                else{}
                if (f>=50 && f<60){printf("') You are below the average student.");}
                else{}
                if (f>=40 && f<50){printf("') You are poor student.");}
                else{}
                if (f<40){printf("') You need extraordinary efforts.");}
                else{}
    return 0;            
                
    

}