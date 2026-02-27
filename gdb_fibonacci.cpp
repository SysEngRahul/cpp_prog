#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1) return 1;
    if(n ==0) return 0;

    return fib(n-1) + fib(n-3);
}

int main()
{
    int n = 5;
    cout << fib(n) << endl;
}
