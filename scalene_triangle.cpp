#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	cout << "\t area of scalene triangle\n";
	float a,b,c,s,area;

	std::cout << "please enter the three sides of the triangles: ";
	std::cin >> a >> b >> c;

	if(a>0 && b> 0 && c>0)
	{
		if( c < a+b && a < b+c && b < a+c)
		{
			s = (a+b+c) / 2;
			area = sqrt(s* (s-a) * (s-b) * (s-c));

			cout << "the area of triangle is " << area << endl;
			return 0;
		}
	}


	else
	{
			cout << "the side of triangle cannot be negative number!" << endl;
	}
	return 0;
}
	
