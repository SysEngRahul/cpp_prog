#include<iostream>
using namespace std;

int main()
{
    int a[5];

    cout << "input an arrray of elements" << endl;
    for(int i =0; i<10; i++)
    {
        cout << "array element [" << i << "] ";
        cin >> a[i];
    }

    cout << endl;

    cout << "displaying arrays: " << endl;

    for(int i = 0; i<4; i++)
    {
        cout << " a[" << i << "] = " << a[i] << endl;

       }
    return 0;
}
       
            
