#include <iostream>
#include <cmath>
using namespace std;
double h(const double x); // прототип
int main()
{
	double x;
	
	cout << "x = "; cin >> x;

	double c = (h(x) + h(1 + h(x))) / (1 + pow(h(1 + pow(h(x), 2)), 2));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double m) // визначення
{
	return sin(m) * sin(m) + m * m + 1;
}