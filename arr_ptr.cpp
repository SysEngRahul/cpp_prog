/*#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << arr << endl;

    cout << &arr[0];

    return 0;
}*/

#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i =0; i< n; i++)
    {
        cout << arr[i] << " ";
    }
}
    int main()
    {
        int arr[] = {2,4,6,8};

        int n = sizeof(arr) / sizeof(arr[0]);

        printArray(arr,n);
        return 0;
    }
