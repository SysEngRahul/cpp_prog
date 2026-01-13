#include<iostream>
using namespace std;

//global variable
int g = 20;
int main()
{
    //local variable
    int g = 10;

    cout << "value of g : " << g;
    cout << endl;

    cout << "value of g (global variable) : " << ::g;
    cout << endl;
    return 0;

