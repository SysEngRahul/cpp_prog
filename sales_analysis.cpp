#include <iostream>
using namespace std;

int main()
{
    int sales[5][3];
    int salesmanTotal[5] = {0};
    int productTotal[3] = {0};

    cout << "Enter sales data:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            cin >> sales[i][j];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
        {
            salesmanTotal[i] += sales[i][j];
            productTotal[j] += sales[i][j];
        }

    cout << "\nTotal sales by each salesman:\n";
    for (int i = 0; i < 5; i++)
        cout << "Salesman " << i + 1 << ": " << salesmanTotal[i] << endl;

    cout << "\nTotal sales of each product:\n";
    for (int j = 0; j < 3; j++)
        cout << "Product " << j + 1 << ": " << productTotal[j] << endl;

    return 0;
}

