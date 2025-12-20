#include <iostream>
using namespace std;
int main()
{
	cout << "\t \t c++ program to calculate area and circumference of circle";
	float r, area, circumference;
	cout << "please enter the radius of the circle:";
	cin >> r;
	if(r>0)
	{
		area = 3.14 * r*r;
		circumference = 2*3.14*r;
		cout << "area of circle is " << area << ";" << endl;
		cout << "circumference of the circle is " << circumference << ";" << endl;
	}

	else
	{
		cout << "negative numbers cannot be applied !!!" << endl;
	}
	return 0;
}
