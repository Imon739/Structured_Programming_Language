#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
    {
        printf("The triangle is VALID.\n");
    }
    else
    {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}

