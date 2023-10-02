#include<stdio.h>
int main()
{
    int  a = 0xC3 ;//1100 0011
    int  b = 0x9F ;// 100 1111
    printf("\nThe value of  A = 0x%X (1100 0011)  ",a);
    printf("\nThe value of  B = 0x%X (1100 0011)  ",b);

    printf("\nThe value of  A&b = 0x%X & 0x%X is 0x%x (1100 0011)  ",a,b,a&b);
    printf("\nThe value of  A|B = 0x%X | 0x%X is 0x%x(1100 0011)  ",a,b,a|b);
    printf("\nThe value of  A^B = 0x%X ^ 0x%X is 0x%x(1100 0011)  ",a,b,a^b);
    printf("\nThe value of  ~A = ~0x%X  is 0x%x (1100 0011)  ",a,~a);
    printf("\nThe value of  A>>2 = 0x%X>>2 is 0x%x (1100 0011)  ",a,a>>4);
    printf("\nThe value of  A<<2 = 0x%X<<2 is 0x%x (1100 0011)  ",a,a<<2);
    return 0 ;
}