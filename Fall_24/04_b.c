#include<stdio.h>
int main()
{
    int arr[10];
    int i, j, temp;

    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The second largest number is: %d\n", arr[8]);

    return 0;
}


