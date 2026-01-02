#include<iostream>
using namespace std;

long long int sum(long long int n)
{
    if(n == 0)
    {
        return 0;
    }

    else
    {
        return n + sum(n-1);
    }


}

int main()
{
    cout << "to find the sum\t";
    int num;
    cout << "please enter the interval:";
    cin >> num;
    cout << "the sum is : " << sum(num);
    return 0;
}