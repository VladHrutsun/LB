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
    return 0; // ��� ������� (���� ��� ������� ����������� ����).
}

int main() {
    double X_start, X_end, dX;

    // �������� ������� � ���������.
    cout << "������ X���: ";
    cin >> X_start;
    cout << "������ X��: ";
    cin >> X_end;
    cout << "������ dX: ";
    cin >> dX;

    // ��������� �������.
    cout << setw(10) << "x" << setw(20) << "y(x)" << endl;
    cout << "-----------------------------------" << endl;

    // ���������� � ��������� ����������.
    for (double x = X_start; x <= X_end; x += dX) {
        try {
            double y = calculateY(x);
            cout << setw(10) << x << setw(20) << y << endl;
        }
        catch (...) {
            // ������� �������� �������, ���������, �������� � ��'������ �����.
            cout << setw(10) << x << setw(20) << "error" << endl;
        }
    }

    return 0;
}
