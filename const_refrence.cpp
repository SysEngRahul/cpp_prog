#include<iostream>
using namespace std;

void show(const string &s)
{
    cout << s;
}

int main()
{
    string msg = "hello";
    show(msg);
}