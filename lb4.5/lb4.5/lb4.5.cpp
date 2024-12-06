#include <iostream>
#include <cmath>  // ��� ������� pow

using namespace std;

// ������� ��� ��������, �� ��������� ����� � �������
bool isPointInArea(double x, double y) {
    // ��������, �� ����� � ����������� ��������
    if (x >= -2 && x <= 2 && y >= -2 && y <= 2) {
        // ��������, �� ����� �� ��������� �� ������
        if (y >= pow(x, 2) - 2 && y <= -x) {
            return true;
        }
    }
    return false;
}

int main() {
    double R1, R2;

    // �������� ���������
    cout << "������ �������� ���������� X: ";
    cin >> R1;
    cout << "������ �������� ���������� Y: ";
    cin >> R2;

    // ��������, �� ����� ��������� � ������������ �������
    if (isPointInArea(R1, R2)) {
        cout << "����� ��������� � ������������ �������." << endl;
    }
    else {
        cout << "����� �� ��������� � ������������ �������." << endl;
    }

    return 0;
}
