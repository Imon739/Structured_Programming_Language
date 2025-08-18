#include <stdio.h>

int main()
{
    int a, b, c, sum;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if(sum == 180 && a > 0 && b > 0 && c > 0)
    {
        printf("The triangle is VALID.\n");
    }
    else
    {
        printf("The triangle is NOT VALID.\n");
    }

    return 0;
}
