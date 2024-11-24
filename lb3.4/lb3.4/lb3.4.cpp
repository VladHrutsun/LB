#include <iostream>
using namespace std;

bool isPointInArea(double x, double y) {
    
    double parabola_y = -x * x + 2; // y = -x^2 + 2
    double line_y = x;              // y = x (пряма під кутом 45°)

    
    return (y >= line_y && y <= parabola_y);
}

int main() {
    double x, y;

    
    cout << "Введіть координати точки (x, y):" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    
    if (isPointInArea(x, y)) {
        cout << "Точка (" << x << ", " << y << ") потрапляє в зафарбовану область." << endl;
    }
    else {
        cout << "Точка (" << x << ", " << y << ") НЕ потрапляє в зафарбовану область." << endl;
    }

    return 0;
}
