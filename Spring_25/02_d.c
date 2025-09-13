#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        for(int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }
        for(int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
