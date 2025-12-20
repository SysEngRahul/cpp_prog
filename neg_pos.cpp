#include<iostream>
using namespace std;

int main()
{
	float number;
	cout << "enter a number";
	cin >> number;

	if(number > 0)
	{
		cout << "the number is positive" << endl;
	}

	else if(number < 0)
	{
		cout << "the number is negtive" << endl;
	}
	else
	{
		cout << "the number is zero" << endl;
	}

	return 0;
}
