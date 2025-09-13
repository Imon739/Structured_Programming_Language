#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n < 5 || n % 2 == 0)
    {
        printf("Invalid input !!!");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i == 1 || i == (n+1)/2 || i == n)
                {
                    printf("*");
                }
                else if(i < (n + 1) / 2 && j == n)
                {
                    printf("*");
                }
                else if (i > (n + 1) / 2 && j == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
