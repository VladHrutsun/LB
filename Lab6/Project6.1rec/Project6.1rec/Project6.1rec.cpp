#include <iostream>
#include <iomanip>
using namespace std;

void init_mas_r(int a[], const int k, int i);
int Sum_un_el_r(int mas[], const int n, int s, int i);
void print_r(int a[], int size, int i);
int Count_un_el_r(int mas[], const int n, int s, int i);
void Switch_on_null_r(int mas[], const int n, int i);

int main()
{
	srand((unsigned)time(NULL));

	const int k = 24;
	int a[k];

	cout << "\n<Recursive method>" << endl;
	init_mas_r(a, k, 0);
	print_r(a, k, 0);
	cout << "\nSum: " << Sum_un_el_r(a, k, 0, 0) << endl;
	cout << "Count: " << Count_un_el_r(a, k, 0, 0) << endl;
	Switch_on_null_r(a, k, 0);
	print_r(a, k, 0);

	return 0;
}
void init_mas_r(int a[], const int k, int i)
{
	if (i < k) {
		a[i] = -50 + rand() % (65 + 1);
		init_mas_r(a, k, i + 1);
	}

}
int Sum_un_el_r(int mas[], const int n, int s, int i) {
	if (i < n) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			s += mas[i];
		}
		return Sum_un_el_r(mas, n, s, i + 1);
	}
	return s;
}void print_r(int a[], int size, int i){	if (i < size) {		cout << "{ a[" << setw(2) << i << "] = " << setw(3) << a[i] << " }  ";		print_r(a, size, i + 1);	}}int Count_un_el_r(int mas[], const int n, int count, int i) {
	if (i < n) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			count++;
		}
		return Count_un_el_r(mas, n, count, i + 1);
	}
	return count;
}
void Switch_on_null_r(int mas[], const int n, int i)
{
	if (i < n) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			mas[i] = 0;
		}
		Switch_on_null_r(mas, n, i + 1);
	}
}