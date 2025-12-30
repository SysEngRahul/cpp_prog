#include<iostream>
using namespace std;

void print(int x)
{
    cout << "int \n";
}
void print(double x)
{
    cout << "double\n";
}

void print(string x)
{
    cout << "string\n";
}
int main()
{
    print(5);
    print(2.3);
    print("hi");
}