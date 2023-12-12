#include<stdio.h>
#include<string.h>
void Largest(char *q)
{
    
}
int main()
{
    char data[100];
    for (int i = 0; i < 100; i++)
    {
         printf("Enter the %d word >>",i+1);
                scanf("%c",data[i]);
        int c=i-1;
            if (strlen(data[i]) == 4)
            {
               break;
            }
    }
    Largest(data);
}
