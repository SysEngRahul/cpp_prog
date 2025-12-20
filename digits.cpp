#include<iostream>
using namespace std;

int main()
{
	int a , sum =0;
	cout << "please enter the number:";
	cin >> a;

	while(a!=0)
	{
		sum = sum + a %10;
		a /= 10;
	}

	cout << "the sum of digits of given number is " << sum << ";" << endl;
	return 0;
}
