#include<iostream>
using namespace std;

class vector
{
    public:
       int x,y;
       vector(int a, int b) : x(a), y(b)
       {

       }
       vector operator+(const vector &v)
       {
        return vector(x+v.x, y+v.y);
       }
};

int main()
{
    vector a(1,2), b(3,4);
    vector c = a+b;
    cout << c.x  << "," << c.y;
}