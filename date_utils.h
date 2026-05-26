#ifndef DATE_UTILS_H
#define DATE_UTILS_H

#include <iostream>
using namespace std;

// Структура TDate (з Param59)
struct TDate
{
    int day;   // день (1-31)
    int month; // місяць (1-12)
    int year;  // рік (будь-яке ціле число)
};

// Перевірка, чи дата правильна
bool isValidDate(const TDate& d);

// Процедура PrevDate (змінює дату на попередню)
void PrevDate(TDate* d);

// Виведення дати
void printDate(const TDate& d);

#endif
