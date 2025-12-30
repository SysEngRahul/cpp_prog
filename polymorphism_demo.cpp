#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw()
         {
        cout << "generic shape\n";
         }
};

class Circle:
public Shape 
{
    public:
    void draw()
    override{
        cout << "circle drawn\n";
    }
};

int main()
{
    Shape* s = new Circle();
    s -> draw();
    delete s;
}