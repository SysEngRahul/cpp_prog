#include<iostream>
using namespace std;
int main()
{
    float temp;
    char unit;
    
    cout << "enter the temp:";
    cin >> temp;
    
    cout << "enter the unit(C/F)";
    cin >> unit;
    
    if(unit == 'C')
    {
        cout << "temp in fahrenheit is " << (temp * 9/5) +32 << "F." << endl;
        
    }
    else if(unit == 'F')
    {
        cout << "tempin celsius is " << (temp -32) * 5 / 9 << "C." << endl;
        
    }
    else
    {
        cout << "invalid unit." << endl;
    }
    return 0;
}
