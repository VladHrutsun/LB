#include <iostream>
#include <cmath>
using namespace std;

double Akerman(const int m, const int n, int level, int& depth)
{
	
	if (level > depth) {
		depth = level;
		//cout << " level = " << level << endl;
	}
	if (m == 0) {
		
		return n + 1;
		
	}
	else {
		if (n == 0) {
			return Akerman(m - 1, 1, level + 1, depth);
		}
		else {
			return Akerman(m - 1, Akerman(m, n - 1, level + 1, depth), level + 1, depth);
		}
	}
}

int main()
{
	int depth = 0;
	cout << "First:   " << Akerman(0, 2, 1, depth) << " (Max Depth: " << depth << ")" << endl;

	depth = 0;
	cout << "Second:  " << Akerman(1, 0, 1, depth) << " (Max Depth: " << depth << ")" << endl;

	depth = 0;
	cout << "Third:   " << Akerman(3, 8, 1, depth) << " (Max Depth: " << depth << ")" << endl;

	return 0;
}