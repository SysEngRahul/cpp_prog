#include<iostream>
using namespace std;

class Demo
{
    public:
      Demo()
      {
        cout << "created\n";

      }
      ~Demo()
      {
        cout << "Destroyed\n";
      }
};

int main()
{
    Demo d;
}