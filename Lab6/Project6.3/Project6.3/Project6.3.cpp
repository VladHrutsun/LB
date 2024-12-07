#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void init_mas(int a[], const int k);
void print(int a[], int size);
int sum_elements(int mas[], const int n);


template <typename T>
T sum_elements_template(T mas[], const int n);

int main() {

    srand((unsigned)time(NULL));
    const int k = 24;
    int a[k];

    // Ітеративний метод
    cout << "<Iterative method>" << endl;
    init_mas(a, k);
    print(a, k);
    cout << "\nSum: " << sum_elements(a, k) << endl;


    // Шаблонна функція для обчислення суми елементів
    cout << "\n<Template function>" << endl;
    cout << "Sum: " << sum_elements_template(a, k) << endl;

    return 0;
}


void init_mas(int a[], const int k) {
    for (int i = 0; i < k; i++) {
        a[i] = -50 + rand() % (65 + 1);
    }
}

void print(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int sum_elements(int mas[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mas[i];
    }
    return sum;
}

template <typename T>
T sum_elements_template(T mas[], const int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mas[i];
    }
    return sum;
}
