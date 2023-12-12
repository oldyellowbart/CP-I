#include<stdio.h>
void string (char *q)
{
    int num =0;
    char Check[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    printf("The phrase is ");
    for (int i = 0; q[i] != '\0'; i++)
    {
       for (int r = 0; r < 27; r++)
       {
       if (q[i] == Check[r])
       {
        printf("%c",q[i]);
       }
       }
}
}
int main()
{
    char text[80];
    printf("Enter the text >>");
    fgets(text,sizeof(text),stdin);
    string(text);
    return 0;
    
}