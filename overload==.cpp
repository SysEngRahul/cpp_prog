#include<iostream>
using namespace std; 

class box
{
    public:
     int h;
     box(int x): h(x){}

     bool operator == (const box &b)
     {
        return h == b.h;
     }
};

int main()
{
    box a(10) , b(10);
    cout << (a==b);

}