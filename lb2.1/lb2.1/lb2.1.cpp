#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_CTYPE, "ukr");
    double alpha;
    std::cout << "����i�� �������� alpha (� ���i����): ";
    std::cin >> alpha;

    double z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) /
        (cos(alpha) + 1 - 2 * pow(sin(2 * alpha), 2));
   
    double z2 = 2 * sin(alpha);
    
    std::cout << "�������� z1 = " << z1 << std::endl;

    std::cout << "�������� z2 = " << z2 << std::endl;

    return 0;
}
