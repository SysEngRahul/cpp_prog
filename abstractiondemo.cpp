#include<iostream>
using namespace std;

class Temperature
{
    double celsius;
    public:
         void setTemp(double c)
         {
            celsius = c;
         }
         double toFahrenheit()
         {
            return (celsius * 9/5) + 32;
         }
};

int main()
{
    Temperature t;
    t.setTemp(100);

    cout << "Fahrenheit = "<<  t.toFahrenheit();
}