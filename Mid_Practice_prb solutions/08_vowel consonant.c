#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O'|| ch == 'U'|| ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
    {
        printf("input character is Vowel !!!");
    }
    else if((ch > 'A' && ch < 'Z') || (ch > 'a' && ch < 'z'))
    {
        printf("input character is Consonant !!! ");
    }
    else
    {
        printf("input character is not Alphabet !!! ");
    }
    return 0;
}
