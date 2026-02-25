#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int x = 10, y = 20;
    

    cout << " before swapping:" << x << " " << y << endl;
    swap(&x, &y);

    cout << "after swapping : "<< x << " " << y<< endl;
    return 0;
}