#include<iostream>
using namespace std;

int main()
{
    cout << "\t\tpascal's triangle\n\n";
    int a[11][11] = {};

    for(int  row =0; row<10; row++)
    {
        for(int col =0; col <= row; col++)
        {
            if(col == 0 || col == row)
            {
                a[row][col] = 1;
            }
            else
            {
                a[row][col] = a[row-1][col-1] + a[row-1][col];
            }

            cout << a[row][col] << " ";
        }

        cout << endl;
    }
    return 0;

}

            

        
