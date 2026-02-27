#include<iostream>
using namespace std;

int add(int a, int b)
{
    int result = a+b;
    return result;

}
int main()
{
    int x  = 5;
    int y = 7;
    int sum = add(x,y);

    cout << "sum: " << sum << endl;
    return 0;
}
