#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    void intro()
    {
        cout << "name:" << name << ", Age: " << age << endl;

    }

};

int main()
{
    Person p;
    p.name = "rahul";
    p.age = 25;
    p.intro();

}