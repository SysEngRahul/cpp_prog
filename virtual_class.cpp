#include<iostream>
using namespace std;

class Base
{
    public:
        virtual void show()
        {
            cout << "base class";

        }

};

class Derived: public Base{
    public:
        void show() override {
            cout << "derived class";
        }
};

int main()
{
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr -> show();
}