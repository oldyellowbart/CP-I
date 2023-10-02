#include<stdio.h>
int main()
{
    printf("this statement is in function %s at line %d",__func__,__LINE__);//object type mac
    printf("\nCompilation time of %s is %s",__FILE__,__TIME__);
    return 0;
}