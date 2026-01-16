#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num, orig, rem, n=0, res=0, power=0;
    cout << "enter an integer:";
    cin >>num;

    orig = num;

    while(orig !=0)
    {
        orig /= 10;
        ++n;
    }

    orig = num;

    while(orig != 0)
    {
        rem = orig % 10;
        power = round(pow(rem , n));

        res += power;
        orig /= 10;

        }


        if(res == num)
        {
        cout << num << " is an armstrong";
        }

        else
        {
        cout << num << "is not an  armstrong";
        }

        return 0;
        }
        
