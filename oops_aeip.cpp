#include<iostream>
#include<vector>
#include<memory>
using namespace std;

//------------abstraction class--------------
class Shape
{
    public:
     virtual double area() const =0;
     virtual void draw() const =0;
     virtual ~Shape() {}


};

//---------encapsulation----------
class Rectangle : public Shape
{
     private: 
        double length;
        double width;
     public:
       Rectangle(double l, double w) : length(l), width(w) {}

    //controlled acess to data
    double getLength() 
    const
    {
        return length;
    }
    double getWidth()
    const
    {
        return width;
    }
    double area()
    const override
    {
        return length * width;
    }
    // implement draw
    void draw()
    const override
    {
        cout << "drawing rectangle (" << length << " x " << width << ") \n ";

    }
};

class Circle : 
public Shape
{
    private:
       double radius;
    public: 
       Circle(double r) : radius(r) {}

       double getRadius() 
       const
       {
        return radius;
       }
       double area()
       const override
       {
        return 3.14159 * radius * radius;
       }

       void draw() const override{
        cout << "Drawing Circle (r = " << radius << ") \n";
       }
};

//---------main demonstrating inheritance + plymorphism------------

int main()
{
    vector<unique_ptr<Shape>> shapes;

    shapes.push_back(make_unique<Rectangle>(4, 5));

    shapes.push_back(make_unique<Circle>(3));

    for (const auto& s : shapes)
{
    s->draw();                               // runtime polymorphism
    cout << "Area = " << s->area() << "\n";  // print returned value
    cout << "------------------\n";
}

    return 0;
}