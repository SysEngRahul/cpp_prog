#include<iostream>
using namespace std;

int main()
{
	int year;
	cout << "enter a year";
	cin >> year;

	string result = ((year % 400 ==0)||(year % 4 ==0) && (year % 100 !=0)) ? "leap year" : "sorry";

	cout << result << endl;
	return 0;
}
