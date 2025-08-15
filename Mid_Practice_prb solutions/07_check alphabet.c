#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if((ch > 'A' && ch < 'Z') || (ch > 'a' && ch < 'z'))
    {
        printf("input character is Alphabet !!! ");
    }
    else
    {
        printf("input character is not Alphabet !!! ");
    }
    return 0;
}
