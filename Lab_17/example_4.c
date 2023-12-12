#include<stdio.h>
int main()
{
    char number [80];
    char charachter;
    int count = 0;
    printf("Enter the text >>");
    fgets(number,sizeof(number),stdin);
    printf("\nYou entered :");
    puts(number);
    printf("\nEnter the Charachter you want to search for >>");
    scanf("%c",&charachter);
    for (int i = 0; number[i]!= '\0'; i++)
    {
        if (charachter == number[i])
        {
            ++count;
        }
    }
    printf("Character \"%c\" appeared %d times",charachter,count );
    return 0;
}