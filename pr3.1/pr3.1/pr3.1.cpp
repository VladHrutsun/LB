#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_CTYPE, "ukr");
    double x, y1, y2;

    
    std::cout << "Введiть значення x: ";
    std::cin >> x;

    // Перший спосіб

    if (x < 0)
        y1 = (2 / x) + fabs(x) + (1 + 4 * pow(x, 2));

    if (x >= 0 && x <= 2)
        y1 = (2 / x) + fabs(x) + pow((exp(x) + fabs(x)), 2);

    if (x > 2)
        y1 = (2 / x) + fabs(x) + 5 * sin(pow(x, 2) + 1);

    // Другий спосіб


    if (x < 0) {
        y2 = (2 / x) + fabs(x) + (1 + 4 * pow(x, 2));
    }
    else if (x >= 0 && x <= 2) {
        y2 = (2 / x) + fabs(x) + pow((exp(x) + fabs(x)), 2);
    }
    else {
        y2 = (2 / x) + fabs(x) + 5 * sin(pow(x, 2) + 1);
    }

    std::cout << "Значення y (скорочена форма if): " << y1 << std::endl;
    std::cout << "Значення y (повна форма if-else if-else): " << y2 << std::endl;

    return 0;
}
