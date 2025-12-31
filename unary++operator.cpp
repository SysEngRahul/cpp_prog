#include<iostream>
using namespace std;

class counter
{
    public:
     int b =0;
     void operator++()
     {
        b++;
     }
};

int main()
{
    counter k;
    ++k;
    cout << k.b;
}