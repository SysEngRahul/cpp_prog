#include<iostream>
using namespace std;

int main()
{
	float a,b;

	cout << "enter first number";
	cin >> a;

	cout << "second number";
	cin >> b;

	a = a+b;
	b = a-b;
	a = a-b;

	cout << "we have swapped your numbers, result is below:" << endl;
	cout << "a = " << a << endl;

	cout << " b = " << b << endl;

	return 0;
}
