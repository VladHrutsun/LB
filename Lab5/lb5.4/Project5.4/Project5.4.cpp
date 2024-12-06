#include <iostream>
#include <cmath>
using namespace std;
double INTERATION(const int N, const int C)
{
	double s = 0;
	for (int k = N; k <= C; k++)

		s += sqrt(sin(k) * sin(k) + cos(1.* N/k) * cos(1. * N / k));
	return s;
}
double RECURS1(const int N, const int C, const int k)
{
	if (k > C)
		return 0;
	else
		return sqrt(sin(k) * sin(k) + cos(1. * N / k) * cos(1. * N / k)) + RECURS1(N, C, k + 1);
}
double RECURS2(const int N, const int C, const int k)
{
	if (k < N)
		return 0;
	else
		return sqrt(sin(k) * sin(k) + cos(1. * N / k) * cos(1. * N / k)) + RECURS2(N, C, k - 1);
}
double RECURS3(const int N, const int C, const int k, double t)
{
	t = t + sqrt(sin(k) * sin(k) + cos(1. * N / k) * cos(1. * N / k));
	if (k >= C)
		return t;
	else
		return RECURS3(N, C, k + 1, t);
}
double RECURS4(const int N, const int C, const int k, double t)
{
	t = t + sqrt(sin(k) * sin(k) + cos(1. * N / k) * cos(1. * N / k));
	if (k <= N)
		return t;
	else
		return RECURS4(N, C, k - 1, t);
}

int main()
{
	int N, C;

	cout << "C = "; cin >> C;
	cout << "N = "; cin >> N;
	cout << "(iter) S0 = " << INTERATION(N, C) << endl;
	cout << "(rec up ++) S1 = " << RECURS1(N, C, N) << endl;
	cout << "(rec up --) S2 = " << RECURS2(N, C, C) << endl;
	cout << "(rec down ++) S3 = " << RECURS3(N, C, N, 0) << endl;
	cout << "(rec down --) S4 = " << RECURS4(N, C, C, 0) << endl;
	return 0;
}