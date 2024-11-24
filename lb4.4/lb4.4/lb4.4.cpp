#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// ������� ��� �������� ��������� � �������
bool isInTargetArea(double x, double y) {
    // y = -x + 2 � ������ ����
    // y = -x^2 + 2 � ����� ����
    if (y >= -x + 2 && y <= -x * x + 2 && x >= -2 && x <= 2 && y >= -2 && y <= 2) {
        return true;
    }
    return false;
}

int main() {
    double x, y;
    int R1, R2;
    double A = -2, B = 2;

    cout << "������ R1 � R2: ";
    cin >> R1 >> R2;

    // 1 �����: ���������� ��������� � ���������
    cout << "1 �����: �������� ��������� ������:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "������ ���������� x � y: ";
        cin >> x >> y;
        if (isInTargetArea(x, y)) {
            cout << "����� (" << x << ", " << y << ") ������ � �����.\n";
        }
        else {
            cout << "����� (" << x << ", " << y << ") �� ������ � �����.\n";
        }
    }

    // 2 �����: �������� ����������
    cout << "\n2 �����: ��������� ���������� ���������:\n";
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < 10; ++i) {
        x = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        y = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        cout << "����������� ����� (" << x << ", " << y << "): ";
        if (isInTargetArea(x, y)) {
            cout << "������ � �����.\n";
        }
        else {
            cout << "�� ������ � �����.\n";
        }
    }

    return 0;
}
