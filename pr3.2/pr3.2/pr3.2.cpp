#include <iostream>
#include <cmath>

using namespace std;


double function(double a, double b, double c, double x) {
    if (a < 0 && c != 0) {
        return a * pow(x, 2) + b * x + c;
    }
    else if (a > 0 && c == 0) {
        return -a / (x - b);
    }
    else {
        return a * (x + c);
    }
}

int main() {
    double a, b, c, x;

    cout << "Vvedit znachennya a, b, c: ";
    cin >> a >> b >> c;

    cout << "Vvedit znachennya x: ";
    cin >> x;

    cout << "F(x) = " << function(a, b, c, x) << endl;

    return 0;
}