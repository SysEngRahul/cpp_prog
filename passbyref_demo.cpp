#include<iostream>
using namespace std;

void increment(int &n)
{
    n++;
}

int main()
{
    int  a=5;
    increment(a);

    cout << a;
}