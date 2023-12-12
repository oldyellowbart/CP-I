#include<stdio.h>
void vowels(char *cnt)
{
    int count = 0;
    int loop =0;
    int space =0,integer1 =0;
char vowels[6] ={'a','e','i','o','u','\0'};
char integer[11] = {'0','1','2','3','4','5','6','7','8','9','\0'};
for (int i = 0; cnt[i] != '\0'; i++)
{
    loop ++;
    for (int  j = 0; j < 6; j++)
    {
        if (cnt[i] == vowels[j])
        {
           count ++;
        }
    }
      if (cnt[i] == ' ')
        {
            space ++;
        }
    for (int l = 0; l < 11; l++)
    {
        if (cnt[i] == integer[l])
        {
           integer1 ++;
        }   
    }
}
printf("Number of wovels area %d\n",count);
printf("Number of consonants are %d",loop-count-space-1);
printf("\nNumber of Spaces are %d",space);
printf("\nNumber of digits are %d ",integer1);
}
int main()
{
    char number [80];
    printf("Enter the text >>");
    fgets(number,sizeof(number),stdin);
    printf("\nYou entered :");
    puts(number);
    vowels(number);
}