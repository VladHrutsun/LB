#include <iostream>
#include <cmath>
using namespace std;

double calculateSumWhile(int N) {
    double sum = 0;
    int j = 2;
    while (j <= N) {
        sum += (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
        j++;
    }
    return sum;
}

double calculateSumDoWhile(int N) {
    double sum = 0;
    int j = 2;
    do {
        sum += (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
        j++;
    } while (j <= N);
    return sum;
}

double calculateSumForIncrement(int N) {
    double sum = 0;
    for (int j = 2; j <= N; j++) {
        sum += (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
    }
    return sum;
}

double calculateSumForDecrement(int N) {
    double sum = 0;
    for (int j = N; j >= 2; j--) {
        sum += (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
    }
    return sum;
}

int main() {
    int N;

    // Введення значення N
    cout << "Введіть значення N: ";
    cin >> N;

    // Обчислення суми за допомогою кожного циклу
    double sumWhile = calculateSumWhile(N);
    double sumDoWhile = calculateSumDoWhile(N);
    double sumForIncrement = calculateSumForIncrement(N);
    double sumForDecrement = calculateSumForDecrement(N);

    // Виведення результатів
    cout << "Результат обчислення за допомогою while: " << sumWhile << endl;
    cout << "Результат обчислення за допомогою do-while: " << sumDoWhile << endl;
    cout << "Результат обчислення за допомогою for (інкремент): " << sumForIncrement << endl;
    cout << "Результат обчислення за допомогою for (декремент): " << sumForDecrement << endl;

    return 0;
}
