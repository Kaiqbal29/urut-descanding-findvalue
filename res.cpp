#include <iostream>
using namespace std;

int main() {

	int a[]{ 2, 3, 4, 5, 6 };
	int* x, * y, z;

	y = &a[2];
	*y = (*x)++ + z;

	cout << "nilai arrray a " << a;
}