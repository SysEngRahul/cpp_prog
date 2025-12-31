#include<iostream>
using namespace std;

class name
{
    public:
      string s;
      name(string x) : s(x) {}

      name operator+ (const name &n)
      {
        return name (s + " " + n.s);
      }
};

int main()
{
    name a("Rahul"), b("Upadhyay");

    cout << (a+b).s;
}