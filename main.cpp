#include <iostream>
#include "date_utils.h"
#include "math_utils.h"

using namespace std;

void task1();
void task2();

int main()
{
    int choice;

    do
    {
        cout << "\n===================================\n";
        cout << "1 - Завдання 1 (Param62 - TDate, PrevDate)\n";
        cout << "2 - Завдання 2 (Begin38 + Boolean33)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 0:
            cout << "Вихід.\n";
            break;
        default:
            cout << "Помилка! Невірний вибір.\n";
        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    const int N = 5;
    TDate dates[N];

    // Введення 5 дат
    for (int i = 0; i < N; i++)
    {
        cout << "\nВведіть дату " << i + 1 << " (день місяць рік): ";
        cin >> dates[i].day >> dates[i].month >> dates[i].year;
    }

    // Застосування PrevDate до кожної дати
    for (int i = 0; i < N; i++)
    {
        cout << "\nПочаткова дата " << i + 1 << ": ";
        printDate(dates[i]);

        PrevDate(&dates[i]);

        cout << "Після PrevDate: ";
        printDate(dates[i]);
    }
}

void task2()
{
    int subchoice;

    do
    {
        cout << "\n--- Завдання 2 ---\n";
        cout << "1 - Begin38 (лінійне рівняння A*x + B = 0)\n";
        cout << "2 - Boolean33 (перевірка трикутника)\n";
        cout << "0 - Назад\n";
        cout << "Ваш вибір: ";
        cin >> subchoice;
        cin.ignore();

        switch (subchoice)
        {
        case 1:
        {
            LinearEquation eq;
            cout << "Введіть A (не дорівнює 0) та B: ";
            cin >> eq.A >> eq.B;

            if (eq.A == 0)
            {
                cout << "Помилка: A не може дорівнювати 0!\n";
            }
            else
            {
                double x = solveLinear(eq);
                cout << "Розв'язок рівняння " << eq.A << "*x + " << eq.B << " = 0\n";
                cout << "x = " << x << endl;
            }
            break;
        }
        case 2:
        {
            Triangle t;
            cout << "Введіть три сторони a, b, c: ";
            cin >> t.a >> t.b >> t.c;

            bool result = isTriangle(t);
            cout << "Трикутник зі сторонами " << t.a << ", " << t.b << ", " << t.c;
            cout << (result ? " існує (true)" : " не існує (false)") << endl;
            break;
        }
        case 0:
            break;
        default:
            cout << "Помилка!\n";
        }

    } while (subchoice != 0);
}
