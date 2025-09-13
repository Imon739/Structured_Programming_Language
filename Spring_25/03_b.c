#include<stdio.h>
int main()
{
    int arr[20];
    int even = 0, odd = 0, sum = 0;
    float avg;
    for(int i=0;i<20;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<20;i++)
    {
        sum += arr[i];
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }

    }
    printf("Numbers of even = %d, numbers of odd = %d\n", even, odd);
    avg = (float)sum/20;
    printf("avg = %.2f", avg);
}
