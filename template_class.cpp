#include<iostream>
using namespace std;

template < typename T>
class box
{
    public:
     T value;
     box(T v):value(v){}

};

int main()
{
    box<int> b1(10);
    box<string> b2("hello");
    cout << b1.value << " "  << b2.value;
}