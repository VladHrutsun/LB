#include <iostream>
#include <iomanip>
using namespace std;

void init_mas(int a[], const int k);
void print(int a[], int size);
int Sum_max_min_el(int mas[], const int n);
int Search_max(int mas[], const int n);
int Search_min(int mas[], const int n);

int main()
{
	srand((unsigned)time(NULL));

	const int k = 24;
	int a[k];
	cout << "<Interactive method>" << endl;
	init_mas(a, k);
	print(a, k);
	cout << "\nCount: " << Sum_max_min_el(a, k) << endl;


	return 0;
}
void init_mas(int a[], const int k)
{
	for (int i = 0; i < k; i++) {
		a[i] = -50 + rand() % (65 + 1);
	}

}void print(int a[], int size){	for (int i = 0; i < size; i++) {
		cout << setw(4) << a[i];
	}}int Search_max(int mas[], const int n)
{	
	int max = mas[0];
	for (int i = 1; i < n; i++) {

		if (mas[i] > max) {
			max = mas[i];
		}
	}
	return max;
	
}
int Search_min(int mas[], const int n)
{

	int min = mas[0];
	for (int i = 1; i < n - 1; i++) {

		if (mas[i] < min) {
			min = mas[i];
		}
	}
	return min;
}
int Sum_max_min_el(int mas[], const int n)
{
	return Search_min(mas, n) + Search_max(mas, n);
}