#include <stdio.h>
int main()
{
int n;
printf("you enter n");
scanf("%d",&n);
isprimeiterative(n);
return 0;
}
int isprimeiterative(int n)
 {
    int f=0;
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
           f++;
        }
        break;
    }
    if (f==0 && n!=1)
    {
      printf("your enter number is prime %d",n);
    }
    else
    {
    printf("your rnter number is not prime");
    }

    return 0;
    
    
 }