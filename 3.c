#include<stdio.h>

int main()
{
    int month, date, year;
    printf("Please enter the year - ");
    scanf("%d", &year);
    if(year < 0)
    {
        puts("Invalid Input.");
        return 0;
    }
    int leap_check = 0;
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
                leap_check = 1;
        }
        else
            leap_check = 1;
    }

    printf("Please enter the month - ");
    scanf("%d", &month);
    if(month < 0 || month > 12)
    {
        puts("Invalid Input. Please enter a value between 1 and 12.");
        return 0;
    }
    printf("Please enter the date - ");
    scanf("%d", &date);

    int date_limit;
    if(month == 4 || month == 6 || month == 9 || month == 11)
        date_limit = 30;
    else if(month == 2)
    {
        if(leap_check == 1)
            date_limit = 29;
        else
            date_limit = 28;
    }
    else
        date_limit = 31;

    if(date < 0 || date > date_limit)
    {
        puts("Invalid Input. No such date in the requested month.");
        return 0;
    }

    int count = date, count_month = 1;
    while(count_month < month)
    {
        if(count_month == 4 || count_month == 6 || count_month == 9 || count_month == 11)
            date_limit = 30;
        else if(count_month == 2)
        {
            if(leap_check == 1)
                date_limit = 29;
            else
                date_limit = 28;
        }
        else
            date_limit = 31;
        count += date_limit;
        count_month++;
    }

    printf("The date you entered corresponds to the day number %d of the year %d. \n", count, year);
}
