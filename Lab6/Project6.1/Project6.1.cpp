#include <iostream>
#include <iomanip>
using namespace std;

void init_mas(int a[], const int k);
int Sum_un_el(int mas[], const int n);
void print(int a[], int size);
int Count_un_el(int mas[], const int n);
void Switch_on_null(int mas[], const int n);


int main()
{
	srand((unsigned)time(NULL));

	const int k = 24; 
	int a[k]; 

	cout << "<Interactive method>" << endl;
	init_mas(a, k);
	print(a, k);
	cout <<"\nSum: " << Sum_un_el(a, k) << endl;
	cout << "Count: " << Count_un_el(a, k) << endl;
	Switch_on_null(a, k);
	print(a, k);

	return 0;
}
void init_mas(int a[], const int k)
{
	for (int i = 0; i < k; i++) {
		a[i] = -50 + rand() % (65 + 1);
	}
	
}
int Sum_un_el(int mas[], const int n) 
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			s += mas[i];
		}
	}
	return s;
}void print(int a[], int size){	for (int i = 0; i < size; i++) {
		cout << "{ a[" << setw(2) << i << "] = " << setw(3) << a[i] <<" }  ";
	}}int Count_un_el(int mas[], const int n) 
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			s++;
		}
	}
	return s;
}void Switch_on_null(int mas[], const int n)
{
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0 || mas[i] % 2 != 0) {
			mas[i] = 0;
		}
	}
}