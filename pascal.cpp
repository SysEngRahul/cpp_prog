#include<iostream>
using namespace std;

int main()
{
    cout << "\t\t Pascal's triangle\n";

    int  a[7][7] = {0};
    for(int i =0; i<7;i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;

        for(int j =1; j<i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    //print
    for(int i=0; i<7; i++)
    {
        for(int j = 0; j<= i; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
