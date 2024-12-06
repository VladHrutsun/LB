#include <iostream>
#include <iomanip> // Для форматування виводу
#include <cmath>   // Для математичних функцій

using namespace std;

int main() {
    double x_start, x_end, dx, eps;

    // Введення параметрів
    cout << "Введіть початкове значення x (x_поч): ";
    cin >> x_start;
    cout << "Введіть кінцеве значення x (x_кін): ";
    cin >> x_end;
    cout << "Введіть крок (dx): ";
    cin >> dx;
    cout << "Введіть точність (eps): ";
    cin >> eps;

    // Заголовок таблиці
    cout << setw(10) << "x"
        << setw(20) << "ln(x) (функція)"
        << setw(20) << "Сума ряду"
        << setw(15) << "Доданки"
        << endl;
    cout << string(65, '-') << endl;

    // Обчислення значень на інтервалі
    for (double x = x_start; x <= x_end; x += dx) {
        if (x <= 0) {
            cout << setw(10) << x << setw(20) << "Невизначено" << setw(20) << "—" << setw(15) << "—" << endl;
            continue;
        }

        // Значення функції ln(x)
        double ln_x = log(x);

        // Обчислення суми ряду
        double sum = 0.0;
        double term = (x - 1) / (x + 1); // Перший доданок
        double ratio = term * term;     // Співвідношення для рекурентного обчислення
        int n = 0;

        while (abs(term) >= eps) {
            sum += term / (2 * n + 1); // Додавання чергового доданка
            term *= ratio;             // Рекурентне співвідношення
            n++;
        }

        sum *= 2; // Множимо на 2 згідно формули

        // Вивід результатів
        cout << setw(10) << x
            << setw(20) << ln_x
            << setw(20) << sum
            << setw(15) << n
            << endl;
    }

    return 0;
}
