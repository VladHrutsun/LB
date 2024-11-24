#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateY(double x) {
    if (x < -1) {
        return sqrt(2 * pow(x, 3)) - 7;
    }
    else if (x >= -1 && x < 3) {
        return 5 * exp(3 * x) - 2 * log10(1 - x / 4);
    }
    else if (x >= 1) {
        return cos(fabs(x)) + 3;
    }
    return 0; // Для повноти (хоча цей випадок покривається вище).
}

int main() {
    double X_start, X_end, dX;

    // Введення значень з клавіатури.
    cout << "Введіть Xпоч: ";
    cin >> X_start;
    cout << "Введіть Xкін: ";
    cin >> X_end;
    cout << "Введіть dX: ";
    cin >> dX;

    // Заголовок таблиці.
    cout << setw(10) << "x" << setw(20) << "y(x)" << endl;
    cout << "-----------------------------------" << endl;

    // Обчислення і виведення результатів.
    for (double x = X_start; x <= X_end; x += dX) {
        try {
            double y = calculateY(x);
            cout << setw(10) << x << setw(20) << y << endl;
        }
        catch (...) {
            // Обробка можливих помилок, наприклад, логарифм з від'ємного числа.
            cout << setw(10) << x << setw(20) << "error" << endl;
        }
    }

    return 0;
}
