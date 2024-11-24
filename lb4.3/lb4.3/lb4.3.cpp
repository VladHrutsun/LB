#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Функція для обчислення значення Y(x)
double calculateY(double x, double R1, double R2) {
    if (x < -2) {
        return -R1 * (x + 2); // Лінійна ділянка ліворуч
    }
    else if (x >= -2 && x < 0) {
        return R1 * x; // Зростаюча ділянка
    }
    else if (x >= 0 && x <= 1) {
        return R2 * x; // Зростаюча ділянка
    }
    else if (x > 1 && x <= 4) {
        return R2; // Постійна ділянка
    }
    else if (x > 4) {
        return R1 * (x - 4); // Лінійна ділянка праворуч
    }
    return 0; // На випадок непередбачених значень
}

int main() {
    double R1, R2, X_start, X_end, dX;

    // Введення параметрів з клавіатури
    cout << "Введіть R1: ";
    cin >> R1;
    cout << "Введіть R2: ";
    cin >> R2;
    cout << "Введіть Xпоч: ";
    cin >> X_start;
    cout << "Введіть Xкін: ";
    cin >> X_end;
    cout << "Введіть dX: ";
    cin >> dX;

    // Заголовок таблиці
    cout << setw(10) << "x" << setw(20) << "Y(x)" << endl;
    cout << "-----------------------------------" << endl;

    // Обчислення і виведення результатів
    for (double x = X_start; x <= X_end; x += dX) {
        double y = calculateY(x, R1, R2);
        cout << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}
