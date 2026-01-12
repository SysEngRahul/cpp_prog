#include<iostream>
using  namespace std;

int main()
{
    const int CAPACITY =10;
    int a[CAPACITY] ;
    int size, value,pos;

    cout << "enter number of elements(max is 9)";

    cin >> size;

    for(int i=0; i<size; i++)
    {
        cout << "a [" << i << "] ="; 
        cin >> a[i];
    }


    cout << "enter elements to insert:";
    cin >> value;

    cout << " enter position (0 to " << size << "):";
    cin >> pos;

    if( pos < 0 || pos > size)
        return 0;

    for(int i = size -1 ; i>= pos; i--)
        a[i+1]  =  a[i];

    a[pos] = value;
    size++;


    cout << "array after insertion:\n";
    for(int i =0; i< size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


