// #include<iostream>
// using namespace std;
// void mergeArray(int arr[], int l, int m, int r, int temp[])
// {
//     int i =l, j = m+1, k= l;
//     while(i <= m && j <= r)
//     {
//         temp[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];
//     }
//     while(i <= m)
//     {
//         temp[k++] = arr[i++];

//     }
//     while(j <=  r)
//     {
//         temp[k++] = arr[j++];
//     }

//     for(int p =l; p<= r; p++)
//     {
//         arr[p] = temp[p];
//     }
// }

// void mergeSort(int arr[], int l, int r, int temp[])
// {
//     if( l>= r)
//     {
//         return;
//     }

//     int mid = (l+r)/2;

//     mergeSort(arr, l, mid, temp);
//     mergeSort(arr, mid+1, r, temp);
    
//     mergeArray(arr,l, mid,r,temp);
// }
// int main()
// {
//     int n;
//     cout << "enter number of elements: ";
//     cin >> n;
//     int arr[n] , temp[n];
//     cout << "now enter the elements: ";
//     for(int i =0; i<n; i++)
//     {
//         cin >> arr[i];
//     }
//     mergeSort(arr, 0, n-1, temp);

//     cout << "sort output:";
//     for(int x: arr)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for(int i =0; i<n-1; i++)
    {
        swapped = false;
        for(int j =0; j < n-i-1; j++)
        {

        
        if(arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }
        if(!swapped)
    {
        break;
    }
    }
    
}

int main()
{
    int n;
    cout <<"enter number of elements:";
    cin >> n;

    int arr[n];
    cout << "enter the elemnts: ";
    for(int i =0; i< n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    cout << "sorted array";
    for(int x : arr)
    {
        cout << x << " ";
    }
}