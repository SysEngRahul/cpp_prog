#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c;
	cout << "enter three sides of a triangle (a b c):";
	cin >> a >> b >> c;
	//checking if sides are positive:
	if( a+b <= c || a+c <= b || b+c <= a)
	{
		cout << "not a valid triangle\n";
		return 0;
	}
	if(a == b && b == c)
	{
		cout << "tirangle is equilateral";
	}
	else if(a == b || b == c || a == c)
	{
		cout << "isoceles triangle";
	}
	else
	{
		cout << "scalene triangle";
	}

	// finding largest side:
	double x =a, y=b, z=c;
	if(x<y) swap(x,y);
	if(x<z) swap(x,z);
	if(y<z)swap(y,z);

	double lhs = z*z;
	double rhs = x*x + y*y;

	if(lhs == rhs)
	{
		cout << "right angled";
	}
	else if(lhs < rhs)

	{
		cout << "acute";
	}
	else
	{
		cout << "obtuse";
	}

	// find perimeter and area:
	double perimeter = a+b+c;
	double s = perimeter/2;
	double area = sqrt(s*(s-a) * (s-b) * (s-c));

	cout << "perimeter : " << perimeter ;

	cout << "area:" << area  ;
	return 0;
}

	

	 

