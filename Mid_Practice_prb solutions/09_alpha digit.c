#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if((ch > 'A' && ch < 'Z') || (ch > 'a' && ch < 'z'))
    {
        printf("input character is Alphabet !!! ");
    }
    else if(ch > '0' && ch < '9')
    {
        printf("input character is Digit !!!");
    }
    else
    {
        printf("input character is Special Character !!!");
    }
    return 0;
}
