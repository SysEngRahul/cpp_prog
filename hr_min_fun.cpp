#include<iostream>
using namespace std;

int hrtomin(int hours)
{
    return hours * 60;
}

int main()
{
    int h;
    cout << "enter hours: ";
    cin >> h;

    int mins = hrtomin(h);
    cout << h << " hours = "   << mins << "minutes "  << endl;
    return 0;
}