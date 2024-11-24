#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// ������� ��� ���������� �������� Y(x)
double calculateY(double x, double R1, double R2) {
    if (x < -2) {
        return -R1 * (x + 2); // ˳���� ������ ������
    }
    else if (x >= -2 && x < 0) {
        return R1 * x; // ��������� ������
    }
    else if (x >= 0 && x <= 1) {
        return R2 * x; // ��������� ������
    }
    else if (x > 1 && x <= 4) {
        return R2; // ������� ������
    }
    else if (x > 4) {
        return R1 * (x - 4); // ˳���� ������ ��������
    }
    return 0; // �� ������� �������������� �������
}

int main() {
    double R1, R2, X_start, X_end, dX;

    // �������� ��������� � ���������
    cout << "������ R1: ";
    cin >> R1;
    cout << "������ R2: ";
    cin >> R2;
    cout << "������ X���: ";
    cin >> X_start;
    cout << "������ X��: ";
    cin >> X_end;
    cout << "������ dX: ";
    cin >> dX;

    // ��������� �������
    cout << setw(10) << "x" << setw(20) << "Y(x)" << endl;
    cout << "-----------------------------------" << endl;

    // ���������� � ��������� ����������
    for (double x = X_start; x <= X_end; x += dX) {
        double y = calculateY(x, R1, R2);
        cout << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}
