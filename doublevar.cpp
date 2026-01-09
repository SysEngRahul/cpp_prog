#include<iostream>
using namespace std;
int main()
{
    double price = 99.99;
    cout << "price : " << price << endl;
    double discount = 10.5;
    double finalprice = price - discount;
    cout << "final price after discount: " << finalprice <<  endl;
    return 0;
}
