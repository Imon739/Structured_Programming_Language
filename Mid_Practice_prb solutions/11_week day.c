#include <stdio.h>

int main()
{
    int week_number;

    scanf("%d", &week_number);

    if (week_number == 1)
    {
        printf("Saturday\n");
    }
    else if (week_number == 2)
    {
        printf("Sunday\n");
    }
    else if (week_number == 3)
    {
        printf("Monday\n");
    }
    else if (week_number == 4)
    {

        printf("Tuesday\n");
    }
    else if (week_number == 5)
    {
        printf("Wednesday\n");
    }
    else if (week_number == 6)
    {
        printf("Thursday\n");
    }
    else if (week_number == 7)
    {
        printf("Friday\n");
    }
    else
    {
        printf("Invalid week number!");
    }
    return 0;
}

