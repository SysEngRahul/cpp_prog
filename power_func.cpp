#include<iostream>
#include<math.h>

using namespace std;

long long int power(long long int x, long long int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, y-1);
    }
}

int main()
{
    cout << "find x^y using recursion " << endl;
    int x,y;
    cout << "please enter the numbers x^y: ";
    cin >> x >> y;
    cout << "Result: " << power(x,y);
    cout << endl;
    return (0);
}