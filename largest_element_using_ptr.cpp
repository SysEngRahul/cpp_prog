#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,45,32,67};
    int n = 4;
    int *ptr = arr;
    int max = *ptr;

    for(int i = 1; i< n; i++)
    {
        if(*(ptr+i) > max)
            max = *(ptr+i);
    }

    cout << "largest element of the array is:"<< max;
    return 0;
}