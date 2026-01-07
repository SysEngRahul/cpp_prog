#include <iostream>
#include <random>
using namespace std;

int main()
{
    const int N = 10;
    int a[N];

    // Random number engine (uniform integers 0–99)
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 99);

    cout << "Randomly generated array elements:\n";

    for(int i = 0; i < N; i++)
    {
        a[i] = dist(gen);
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    double sum = 0;

    for(int i = 0; i < N; i++)
        sum += a[i];

    double average = sum / N;

    cout << "\nAverage of array elements = " << average << endl;

    return 0;
}
