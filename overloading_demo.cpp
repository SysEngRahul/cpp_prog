#include<iostream>

using namespace std;

int area(int a)
{
    return (a*a);
}

int area(int l, int b)
{
    return l*b;
}

int main()
{
    cout << area(5) << endl;
    cout << area(4,6);
}