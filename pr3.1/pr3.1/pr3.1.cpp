#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_CTYPE, "ukr");
    double x, y1, y2;

    
    std::cout << "����i�� �������� x: ";
    std::cin >> x;

    // ������ �����

    if (x < 0)
        y1 = (2 / x) + fabs(x) + (1 + 4 * pow(x, 2));

    if (x >= 0 && x <= 2)
        y1 = (2 / x) + fabs(x) + pow((exp(x) + fabs(x)), 2);

    if (x > 2)
        y1 = (2 / x) + fabs(x) + 5 * sin(pow(x, 2) + 1);

    // ������ �����


    if (x < 0) {
        y2 = (2 / x) + fabs(x) + (1 + 4 * pow(x, 2));
    }
    else if (x >= 0 && x <= 2) {
        y2 = (2 / x) + fabs(x) + pow((exp(x) + fabs(x)), 2);
    }
    else {
        y2 = (2 / x) + fabs(x) + 5 * sin(pow(x, 2) + 1);
    }

    std::cout << "�������� y (��������� ����� if): " << y1 << std::endl;
    std::cout << "�������� y (����� ����� if-else if-else): " << y2 << std::endl;

    return 0;
}
