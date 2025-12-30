#include<iostream>
using namespace std;

class Vehicle
{
    public:
      void start()
      {
        cout <<  "Vehicle started\n";
      }
};

class Car:



   public Vehicle
   {
    public:
       void horn()
       {
        cout << "beep beep\n";
       }
   };

   int main()
   {
    Car c;
    c.start();
    c.horn();
   }