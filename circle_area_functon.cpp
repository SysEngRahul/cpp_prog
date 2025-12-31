#include<iostream>
#include<math.h>
using namespace std;

float area(float radius)
{
    float area;
    area = (atan(1) * 4) * ( pow(radius, 2));
    return area;
}

int main()
{
    float radius;
    cout << "please enter the radius of circle:";

    cin >> radius;

    if(radius > 0)
    {
        cout << area(radius) << endl;
    }
    else
    {
        cout << "invalid radius!" << endl;
    }
    return 0;
}