#include <stdio.h>
int main()
{
    int i, j, m[4];
    for(i = 0, j = 1; i < 4; i = i + 1, j = j + 2)
    {
        m[i] = i * i + j;
        printf("i = %d, j = %d, ", i, j);
        printf("m[%d] = %d\n", i, m[i]);
    }
    return 0;
}

