#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double p(const double x);
int main()
{
	double qp, qk, z;
	int n;
	cout << "qp = "; cin >> qp;
	cout << "qk = "; cin >> qk;
	cout << "n = "; cin >> n;
	double dg = (qk - qp) / n;
	double q = qp;
	cout << "-----------------" << endl;
	cout << "|" << setw(7) << setprecision(4) << "q" << "|" << setw(7) << setprecision(4) << "z" << "|" << endl;
	cout << "-----------------" << endl;
	while (q <= qk)
	{
		z = p(q + 1) + p(q * q + 1) + p(q * q ) * p(q * q);
		
		cout << "|" << setw(7) << setprecision(4) << q <<  "|" << setw(7) << setprecision(4) << z << "|" << endl;
		q += dg;
	}
	cout << "-----------------";
	return 0;
}	
double p(const double x)
{
	if (abs(x) >= 1)

		return (cos(x) + 1) / (cos(x) * cos(x) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x * x) / (2 * i) * (2 * i - 1);
			a *= R;
			S += a;
		} while (i < 6);
		return S;
	}
}