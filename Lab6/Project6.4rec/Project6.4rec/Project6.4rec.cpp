#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void init_r(double* a, const int size, int i);

void print_r(double* a, int size, int i);

double sum_elements_bet_r(double* mas, const int n, int i, double sum, int start, int end);

int nomer_min_element_r(double* mas, const int n, int i, int nomer, double min_el);

int serch_minus_el_r(double* mas, const int n, int start);

void mas_transform_r(double* mas, const int size, int i, int c, double m);

int main() {

    srand((unsigned)time(NULL));
    int n;
    cout << "n = ";
    cin >> n;
    double* a = new double[n];

    // Ітеративний метод
    cout << "<Iterative method>" << endl;

    init_r(a, n, 0);
    print_r(a, n, 0);

    cout << "\nNomer min element: " << nomer_min_element_r(a, n, 0, 0, a[0]) << endl;
    cout << "\nFirstPlus element: " << serch_minus_el_r(a, n, 0) << endl;
    cout << "\nSecondPlus element: " << serch_minus_el_r(a, n, serch_minus_el_r(a, n, 0) + 1) << endl;
    cout << "\nSum elements bettwen first minus elements: " << sum_elements_bet_r(a, n, serch_minus_el_r(a, n, 0)+1,0 , serch_minus_el_r(a, n, 0), serch_minus_el_r(a, n, serch_minus_el_r(a, n, 0) + 1)) << endl;
    mas_transform_r(a, n, 0, 0 ,0);
    print_r(a, n, 0);

    return 0;
}

void init_r(double* a, const int size, int i) {

    if(i < size){
        a[i] = round(((double)rand() / RAND_MAX * 4 - 2) * 100) / 100;
        init_r(a, size, i + 1);
    }

}


void print_r(double* a, int size, int i) {

    if (i < size) {
        cout << setw(6) << a[i];
        print_r(a, size, i + 1);
    }
}

int nomer_min_element_r(double* mas, const int n, int i, int nomer, double min_el) {
    if (i < n) {
        if (min_el > mas[i]) {
            min_el = mas[i];
            nomer = i;
        }
        return nomer_min_element_r(mas, n, i + 1, nomer ,min_el);
    }
    return nomer;
}
double sum_elements_bet_r(double* mas, const int n, int i, double sum, int start, int end) {
    
    
    if (start == -1 || end == -1 || start >= end) {
        return 0;  // Випадок, коли нема двох від'ємних елементів
    }
    if (i < end) {
        sum += mas[i];
        return sum_elements_bet_r(mas, n, i + 1, sum, start, end);
    }
    return sum;
    
    
}
int serch_minus_el_r(double* mas, const int n, int i) {
    if (i >= n) 
        return -1;
    if (mas[i] < 0) 
        return i;
    return serch_minus_el_r(mas, n, i + 1);
}

void mas_transform_r(double* mas, const int size, int i, int c, double m) {
    if (i < size) {
        if (abs(mas[i]) <= 1) {
            m = mas[c];
            mas[c] = mas[i];
            mas[i] = m;
              
            mas_transform_r(mas, size, i + 1, c + 1 , m);
        }
        else {
            mas_transform_r(mas, size, i + 1, c, m);
        }
    }
}