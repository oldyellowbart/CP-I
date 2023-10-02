#include<stdio.h>
int main()
{
    printf("\nThe Value of __FILE__ is %s",__FILE__);
    printf("\nThe Value of __LINE__ is %d",__LINE__);
    printf("\nThe Value of __DATE__ is %s",__DATE__);
    printf("\nThe Value of __TIME__ is %s",__TIME__);
    printf("\nThe Value of __func__ is %s",__func__);
    printf("\nThe Value of __STDC__ is %d",__STDC__);
    return 0;
}