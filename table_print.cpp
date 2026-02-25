#include<iostream>
using namespace std;
int main()
{
    int num  = 0;
    cout << "enter a number:";

    if(!(cin >> num))
    {
        cerr << "invalid";
        return 1;
    }
    for(int i =1; i<= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << "\n";
    }

    return 0;
}
