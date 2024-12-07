#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void init(double* a, const int size);

void print(double* a, int size);

double sum_elements_bet(double* mas, const int n);

int nomer_min_element(double* mas, const int n);

int serch_minus_el(double* mas, const int n, int start);

void mas_transform(double* mas, const int k);

int main() {

    srand((unsigned)time(NULL));
    int n ;
    cout << "n = ";
    cin >> n;
    double*  a = new double[n];

    // Ітеративний метод
    cout << "<Iterative method>" << endl;

    init(a, n);
    print(a, n);

    cout << "\nNomer min element: " << nomer_min_element(a, n) << endl;
    cout << "\nFirstPlus element: " << serch_minus_el(a, n, 0) << endl;
    cout << "\nSecondPlus element: " << serch_minus_el(a, n, serch_minus_el(a, n, 0) + 1) << endl;
    cout << "\nSum elements bettwen first minus elements: " << sum_elements_bet(a, n) << endl;
    mas_transform(a, n);
    print(a, n);
    
    return 0;
}

void init(double* a, const int size) {

    for (int i = 0; i < size; i++) {
        a[i] = round(((double)rand() / RAND_MAX * 4 - 2)*100) / 100;
    }
    
}


void print(double* a, int size) {
    for (int i = 0; i < size; i++) {
        cout <<setw(6) << a[i];
    }
    cout << endl;
}

int nomer_min_element(double* mas, const int n) {
    int nomer = 0;
    double min_el = mas[0];
    for (int i = 1; i < n; i++) {
        if (min_el > mas[i]) {
            min_el = mas[i];
            nomer = i;
        }
    }
    return nomer;
}
double sum_elements_bet(double* mas, const int n) {
    double sum = 0;
    int start = serch_minus_el(mas, n, 0);
    int end = serch_minus_el(mas, n, start + 1);

    if (start == -1 || end == -1 || start >= end) {
        return 0;  // Випадок, коли нема двох від'ємних елементів
    }

    for (int i = start + 1; i < end; i++) {
        sum += mas[i];
    }
    return sum;
}
int serch_minus_el(double* mas, const int n, int start) {

    while (start < n) {
        if (mas[start] < 0) {
            return start;
        }
        start++;
    }
    return -1;
}
void mas_transform(double* mas, const int k) {
    int c = 0;
    double m;
    for (int i = 0; i < k; i++) {
        if (abs(mas[i]) <= 1) {
            m = mas[c];
            mas[c] = mas[i];
            mas[i] = m;
            c++;
        }
    }
    
}

