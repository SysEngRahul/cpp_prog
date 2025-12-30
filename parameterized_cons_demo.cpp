#include<iostream>
using namespace std;

class Point
{
    int x,y;
    public:
     Point (int a, int b): x(a), y(b) {}
     void show()
     {
        cout << x << "," << y;
     }
};

int main()
{
    Point p(100,400);
    p.show();

}