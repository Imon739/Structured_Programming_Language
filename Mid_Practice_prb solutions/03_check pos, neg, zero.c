#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Number is Positive !!!");
    }
    else if(num < 0)
    {
        printf("Number is Negative !!!");
    }
    else
    {
        printf("Number is 0.");
    }

    return 0;
}
