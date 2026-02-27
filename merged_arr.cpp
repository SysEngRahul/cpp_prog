#include<iostream>
#include<set>
using namespace std;

int main()
{
    int arr1[] = {3,4,6,2,3};
    int arr2[] = {4,2,3,6,8};

    int n1 = 5;
    int n2 = 5;

    set<int> uniqueElements;

    //insert arr1 elements
    for(int i = 0; i< n2; i++)
    {
        uniqueElements.insert(arr1[i]);
    }

    //insert arr2 elements
    for(int i =0; i< n2; i++)
    {
        uniqueElements.insert(arr2[i]);
    }

    cout << "merged array without duplicates:";
    for(int value : uniqueElements)
    {
        cout << value << " ";
    }
    return 0;
}