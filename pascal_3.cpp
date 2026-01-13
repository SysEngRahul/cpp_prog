#include<iostream>
using namespace std;

int main()
{
    int a[7][7] = {0};
    int n = 7;
    
    //build pascal's triangle:
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<= i; j++)
        {
            if(j == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
        
       //print the pattern:
        for(int i = 0; i<7; i++)
        {
            //print leading spaces:
            for(int s = 0; s < n-i-1;  s++)
                cout << " ";

            // print the numbers:
            for(int j = 0; j<= i; j++)
            {
                cout << a[i][j] << " ";
            }

            cout << endl;
        }

        return 0;
}
