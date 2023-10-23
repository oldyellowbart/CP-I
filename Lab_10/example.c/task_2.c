#include<stdio.h>
void star_format_2(int);
void main(){
    int a=0;
    printf("ENTER THE LIMIT OF NUMBER\n");
    scanf("%d",&a);
    star_format_2(a);
}
void star_format_2(int q){
    for (int i = 0; i < q; i++)
    {

        for (int j = q; j >= i; j--)
        {
            printf(" ");
        }
        
         for (int h = 0; h <= i; h++)
      {
        printf("*");
      }
     printf("\n");
    }
    
}