#include<iostream>
using namespace std;

int main()
{
    int num = 121, original = num, rev = 0;
    while(num > 0)
    {
        rev = rev * 10 + num % 10 ;
        num /= 10;

    }
    if(original == rev)
    {
        cout << "palindrome";

    }
    else{
        cout << "not plaindrome";
    }
    return 0;
}
