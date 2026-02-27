#include<iostream>
using namespace std;

int main()
{
    string str = "madam";
    bool flag = true;

    for(int i = 0; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1])
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}
