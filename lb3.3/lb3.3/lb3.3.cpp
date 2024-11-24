#include <iostream>
#include <cmath>
using namespace std;

double calculateY(double x, double R1, double R2) {
    double y = 0;
    if (x < -2) {
        
        y = -R1 * (x + 2);
    }
    else if (x >= -2 && x <= 0) {
        
        y = -sqrt(R1 * R1 - (x + 1) * (x + 1));
    }
    else if (x > 0 && x <= 1) {
       
        y = sqrt(R2 * R2 - (x - 1) * (x - 1));
    }
    else if (x > 1 && x <= 4) {
      
        y = R2;
    }
    else if (x > 4 && x <= 6) {
        
        y = R2 * (x - 4);
    }
    else if (x > 6) {
      
        y = 0;
    }
    return y;
}

int main() {
    double x, R1, R2;

    cout << "Введіть значення R1: ";
    cin >> R1;
    cout << "Введіть значення R2: ";
    cin >> R2;

    cout << "Введіть значення x: ";
    cin >> x;

    double y = calculateY(x, R1, R2);

    cout << "Значення функції: y = " << y << endl;

    return 0;
}
