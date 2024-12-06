#include <iostream>
#include <cmath> // ��� ������������ tan() �� sqrt()

int main() {
    double result = 1; // �������� ���������� ��� ���������� �������

    // 1. ���������� �� ��������� ����� while
    result = 1;
    int i = 1;
    while (i <= 3) {
        int j = 1;
        while (j <= 4 - i) {
            result *= sqrt(fabs(tan(i))) / (i + j * j);
            j++;
        }
        i++;
    }
    std::cout << "Result using while-loops: " << result << std::endl;

    // 2. ���������� �� ��������� ����� do-while
    result = 1;
    i = 1;
    do {
        int j = 1;
        do {
            result *= sqrt(fabs(tan(i))) / (i + j * j);
            j++;
        } while (j <= 4 - i);
        i++;
    } while (i <= 3);
    std::cout << "Result using do-while-loops: " << result << std::endl;

    // 3. ���������� �� ��������� ����� for � �����������
    result = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4 - i; j++) {
            result *= sqrt(fabs(tan(i))) / (i + j * j);
        }
    }
    std::cout << "Result using for-loops (increment): " << result << std::endl;

    // 4. ���������� �� ��������� ����� for � �����������
    result = 1;
    for (int i = 3; i >= 1; i--) {
        for (int j = 4 - i; j >= 1; j--) {
            result *= sqrt(fabs(tan(i))) / (i + j * j);
        }
    }
    std::cout << "Result using for-loops (decrement): " << result << std::endl;

    return 0;
}
