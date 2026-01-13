#include <iostream>
using namespace std;

int main()
{
    int m, n, choice;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    do
    {
        cout << "\n1.Sum\n2.Transpose of A\n3.Product\n4.Exit\nChoice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                    C[i][j] = A[i][j] + B[i][j];

            cout << "Sum:\n";
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << C[i][j] << " ";
                cout << endl;
            }
            break;

        case 2:
            cout << "Transpose of A:\n";
            for (int j = 0; j < n; j++)
            {
                for (int i = 0; i < m; i++)
                    cout << A[i][j] << " ";
                cout << endl;
            }
            break;

        case 3:
            for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                {
                    C[i][j] = 0;
                    for (int k = 0; k < n; k++)
                        C[i][j] += A[i][k] * B[k][j];
                }

            cout << "Product:\n";
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << C[i][j] << " ";
                cout << endl;
            }
            break;
        }
    } while (choice != 4);

    return 0;
}

