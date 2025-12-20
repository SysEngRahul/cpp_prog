#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum =0;
    cout << "enter the value of n:";
    cin >> n;

    for(int i =1; i<=n; i++)
    {
        sum += 1/i;
    }

    cout << "sum is :" <<  sum << endl;
    return 0;

}