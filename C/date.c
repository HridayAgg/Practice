#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date d1 = {12, 1, 12};
    date d2 = {1, 1, 12};
    if (d1.year > d2.year)
    {

        printf("%d/%d/%d comes after %d/%d/%d", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
    }
    else if (d2.year > d1.year)
    {
        printf("%d/%d/%d comes after %d/%d/%d", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
    }
    else if (d1.year == d2.year)
    {
        if (d1.month > d2.month)
        {
            printf("%d/%d/%d comes after %d/%d/%d", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
        }
        else if (d2.month > d1.month)
        {
            printf("%d/%d/%d comes after %d/%d/%d", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
        }
        else if (d1.month == d2.month)
        {
            if (d1.day > d2.day)
            {
                printf("%d/%d/%d comes after %d/%d/%d", d1.day, d1.month, d1.year, d2.day, d2.month, d2.year);
            }
            else if (d2.day > d1.day)
            {
                printf("%d/%d/%d comes after %d/%d/%d", d2.day, d2.month, d2.year, d1.day, d1.month, d1.year);
            }
        }
        else if (d1.day == d2.day)
        {
            printf("They are the same date");
        }
    }
    return 0;
}
