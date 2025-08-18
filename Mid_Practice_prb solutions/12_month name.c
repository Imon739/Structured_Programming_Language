#include <stdio.h>

int main()
{
    int month, year, days;
    scanf("%d", &month);

    if(month >= 1 && month <= 12)
    {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else if (month == 2)
    {
        printf("Enter the year: ");
        scanf("%d", &year);

        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
    }
    printf("Number of days in month %d is %d.\n", month, days);
    }
    else
    {
        printf("Invalid month number entered.\n");
    }

    return 0;
}

