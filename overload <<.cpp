#include<iostream>
using namespace std;

class point
{
    public:
     int x,y;
     point (int a, int b): x(a), y(b){}

};

ostream& operator<<(ostream &out, const point &p)
{
    return out << "(" << p.x << "," << p.y<< ")";
}

int main()
{
    point p(3,4);
    cout << p;
}