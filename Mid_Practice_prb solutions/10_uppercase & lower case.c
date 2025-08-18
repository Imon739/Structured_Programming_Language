#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Character is Uppercase !!!");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Character is Lowercase !!!");
    }
    else
    {
        printf("Invalid input !!!");
    }
    return 0;
}
