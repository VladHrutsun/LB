#include <iostream>
#include <cmath>  // Для функції pow

using namespace std;

// Функція для перевірки, чи потрапляє точка в область
bool isPointInArea(double x, double y) {
    // Перевірка, чи точка в допустимому інтервалі
    if (x >= -2 && x <= 2 && y >= -2 && y <= 2) {
        // Перевірка, чи точка між параболою та прямою
        if (y >= pow(x, 2) - 2 && y <= -x) {
            return true;
        }
    }
    return false;
}

int main() {
    double R1, R2;

    // Введення координат
    cout << "Введіть значення координати X: ";
    cin >> R1;
    cout << "Введіть значення координати Y: ";
    cin >> R2;

    // Перевірка, чи точка потрапляє в заштриховану область
    if (isPointInArea(R1, R2)) {
        cout << "Точка потрапляє в заштриховану область." << endl;
    }
    else {
        cout << "Точка не потрапляє в заштриховану область." << endl;
    }

    return 0;
}
