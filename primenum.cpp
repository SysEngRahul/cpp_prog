#include<iostream>
using namespace std;
int main()
{
    int num, j=0;
    cout << "enter the number:";

    cin >> num;

    for(int i=1; i<=num; i++)
    {
        if((num % i) == 0)
        {
            j++;
        }
    }

    if(j == 2)
    {
        cout << num << "is a prime number." << endl;

    }
    else
    {
        cout << num << "is not a prime number." << endl;
    }
    return 0;
}