#include<iostream>
using namespace std;

int main()
{
    float sum = 0, fact = 1;
    for(int i =1; i<= 13; i++)
    {
        fact = fact * i;
        sum += i / fact;
    }
    cout << "sum is: " << sum << endl;
    return 0;
}