#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 20;
    bool prime = true;

    if( n<= 1)
        prime = false;
    for(int i = 2; i<= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "prime";
    else
        cout << "not prime";
}