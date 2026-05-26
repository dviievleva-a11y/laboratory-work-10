#include "date_utils.h"

// Перевірка, чи рік високосний
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0)  (year % 400 == 0);
}

// Кількість днів у місяці
int daysInMonth(int month, int year)
{
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

// Перевірка коректності дати
bool isValidDate(const TDate& d)
{
    if (d.month < 1  d.month > 12)
        return false;
    if (d.day < 1 || d.day > daysInMonth(d.month, d.year))
        return false;
    return true;
}

// Зменшення дати на 1 день
void PrevDate(TDate* d)
{
    // Якщо дата неправильна — не міняємо
    if (!isValidDate(*d))
        return;

    // Зменшуємо день на 1
    d->day--;

    // Якщо день став 0, переходимо на попередній місяць
    if (d->day == 0)
    {
        d->month--;
        if (d->month == 0)
        {
            d->month = 12;
            d->year--;
        }
        d->day = daysInMonth(d->month, d->year);
    }
}

// Виведення дати у форматі DD.MM.YYYY
void printDate(const TDate& d)
{
    if (!isValidDate(d))
    {
        cout << "Неправильна дата!" << endl;
        return;
    }

    if (d.day < 10) cout << "0";
    cout << d.day << ".";
    if (d.month < 10) cout << "0";
    cout << d.month << "." << d.year << endl;
}
