#include<iostream>
using namespace std;

int  main()
{
    double hours;
    cout << "enter hours: ";
    cin >> hours;

    int minutes = hours * 60;

    cout << hours << " hours = "  << minutes << " minutes " << endl;
    return 0;
}