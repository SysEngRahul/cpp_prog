#include<iostream>
using namespace std;

struct car
{
    string brand;
    string model;
    int year;
};

int main()
{
    car mycar1;

    mycar1.brand = "tata";
    mycar1.model = "safari";
    mycar1.year = 2008;

    car mycar2;

    mycar2.brand = "ford";
    mycar2.model = "mustang";
    mycar2.year = 1969;

    cout  << mycar1.brand << " " << mycar1.model << " " << mycar1.year << " \n ";
    cout  << mycar2.brand << " " << mycar2.model << " " << mycar2.year << " \n ";

    return 0;
}
