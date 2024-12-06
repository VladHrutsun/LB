#include <iostream>
#include <iomanip> // ��� ������������ ������
#include <cmath>   // ��� ������������ �������

using namespace std;

int main() {
    double x_start, x_end, dx, eps;

    // �������� ���������
    cout << "������ ��������� �������� x (x_���): ";
    cin >> x_start;
    cout << "������ ������ �������� x (x_��): ";
    cin >> x_end;
    cout << "������ ���� (dx): ";
    cin >> dx;
    cout << "������ ������� (eps): ";
    cin >> eps;

    // ��������� �������
    cout << setw(10) << "x"
        << setw(20) << "ln(x) (�������)"
        << setw(20) << "���� ����"
        << setw(15) << "�������"
        << endl;
    cout << string(65, '-') << endl;

    // ���������� ������� �� ��������
    for (double x = x_start; x <= x_end; x += dx) {
        if (x <= 0) {
            cout << setw(10) << x << setw(20) << "�����������" << setw(20) << "�" << setw(15) << "�" << endl;
            continue;
        }

        // �������� ������� ln(x)
        double ln_x = log(x);

        // ���������� ���� ����
        double sum = 0.0;
        double term = (x - 1) / (x + 1); // ������ �������
        double ratio = term * term;     // ������������ ��� ������������ ����������
        int n = 0;

        while (abs(term) >= eps) {
            sum += term / (2 * n + 1); // ��������� ��������� �������
            term *= ratio;             // ���������� ������������
            n++;
        }

        sum *= 2; // ������� �� 2 ����� �������

        // ���� ����������
        cout << setw(10) << x
            << setw(20) << ln_x
            << setw(20) << sum
            << setw(15) << n
            << endl;
    }

    return 0;
}
