#include<iostream>
using namespace std;

int gcd(int x, int y)
{
    if(x == 0 || y == 0)
    {
        return y,x;
    }
    if(x == y)
    {
        return x;
    }
    if(x > y)
    {
        return gcd(x-y, y);
    }
    if(y > x)
    {
        return gcd(x, y-x);
    }
}

int main()
{
    cout << "please enter two integers:" << endl;
    int x,y;
    cin >> x >> y;
    cout << "the GCD of " << x << "  and  "  << y << "  is "  <<  gcd(x,y);
    return 0;
}