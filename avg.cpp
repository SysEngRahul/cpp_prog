#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
    const int N = 10;
    int a[N];

    srand(time(0));
    for(int i = 0; i<N; i++)
    {
        a[i] = rand() % 100;
        std::cout << "a[" << i << "] = " << a[i] << "\n";

    }
    double sum = 0;
    for(int i =0; i<N; i++)
    {
        sum += a[i];
    }

    double average = sum /N;
    std::cout << "average = " << average << std::endl;

    return 0;
}