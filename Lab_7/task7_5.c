#include<stdio.h>
int main(){
    float a,b;
    printf("enter the day<<");
    scanf("%f",&a);
    printf("Enter the month<<");
    scanf("%f",&b);
    if(0<=a){
        if(a>=7){
            if(0<=b){
              if(b>=3){
        printf("The entered data is valid\n");
        }
            }
        }
    }
    else{
        printf("The entered data is invalid\n");
    }
    return 0;
    
    
}