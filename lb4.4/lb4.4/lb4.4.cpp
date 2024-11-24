#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція для перевірки попадання в область
bool isInTargetArea(double x, double y) {
    // y = -x + 2 — верхня межа
    // y = -x^2 + 2 — нижня межа
    if (y >= -x + 2 && y <= -x * x + 2 && x >= -2 && x <= 2 && y >= -2 && y <= 2) {
        return true;
    }
    return false;
}

int main() {
    double x, y;
    int R1, R2;
    double A = -2, B = 2;

    cout << "Введіть R1 і R2: ";
    cin >> R1 >> R2;

    // 1 спосіб: Координати вводяться з клавіатури
    cout << "1 спосіб: Введення координат вручну:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "Введіть координати x і y: ";
        cin >> x >> y;
        if (isInTargetArea(x, y)) {
            cout << "Точка (" << x << ", " << y << ") попала в мішень.\n";
        }
        else {
            cout << "Точка (" << x << ", " << y << ") не попала в мішень.\n";
        }
    }

    // 2 спосіб: Випадкові координати
    cout << "\n2 спосіб: Генерація випадкових координат:\n";
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < 10; ++i) {
        x = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        y = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        cout << "Сгенерована точка (" << x << ", " << y << "): ";
        if (isInTargetArea(x, y)) {
            cout << "Попала в мішень.\n";
        }
        else {
            cout << "Не попала в мішень.\n";
        }
    }

    return 0;
}
