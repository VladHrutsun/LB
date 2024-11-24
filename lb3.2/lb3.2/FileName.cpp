#include <iostream>
using namespace std;

int main() {
    
    double a, b, c, x, F;

    
    cout << "Введіть значення a, b, c, x: ";
    cin >> a >> b >> c >> x;

    // Перший спосіб - скорочена форма
    F = (x == 0 && b != 0) ? (a * (x + c) * (x + c) - b) :
        (x == 0 && b == 0) ? (x - a) / -c :
        a + x / c;

    cout << "Результат (скорочена форма): F = " << F << endl;

    // Другий спосіб - повна форма
    if (x == 0 && b != 0) {
        F = a * (x + c) * (x + c) - b;
    }
    else if (x == 0 && b == 0) {
        F = (x - a) / -c;
    }
    else {
        F = a + x / c;
    }

    
    cout << "Результат (повна форма): F = " << F << endl;

    return 0;
}
