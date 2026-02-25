#include<iostream>
using namespace std;
int main()
{
    int num,first,last;
    cout <<"enter any number:";

    cin >> num;

    last = num % 10;

    while(num != 0)
    {
        first = num %10;
        num /= 10;
    }

    cout << "first digit = " << first << endl << "last digit = " << last  << endl;
    return 0;
}
