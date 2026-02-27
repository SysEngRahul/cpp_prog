#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {3,4,6,2,3};
    int arr2[] = {4,2,3,6,8};

    int n1 = 5;
    int n2 = 5;

    int merged[n1+n2];

    //copy first arrray
    for(int i = 0; i<n1; i++)
    {
        merged[i] = arr1[i];
    }

    //copy second array
    for(int i = 0; i<n2; i++)
    {
        merged[n1+i] = arr2[i];
    }

    cout << "merged array: ";

    for(int i =0; i< n1 + n2; i++)
        cout <<merged[i] << " ";
}