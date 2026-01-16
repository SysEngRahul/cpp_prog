#include<iostream>
using namespace std;

int main()
{
    int num, originalnum, rem, res=0;
    cout << "enter a three-digit integer:";
    cin>> num;
    originalnum = num;

    while(originalnum != 0)
    {
        rem = originalnum % 10;

        res += rem * rem * rem;
        
        originalnum /= 10;
    }

    if(res == num)
        cout << num << " is an armstrong number:";
    else
        cout << num << " not an armstrong number:";
    return 0;
}
