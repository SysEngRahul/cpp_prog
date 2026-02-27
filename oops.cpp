#include <iostream>
using namespace std;

class Person {      // Encapsulation
private:
    string name;

public:
    Person(string n) { name = n; }
    void display() { cout << "Name: " << name << endl; }
};

class Student : public Person {   // Inheritance
private:
    int marks;

public:
    Student(string n, int m) : Person(n) {
        marks = m;
    }

    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s("Rahul", 90);
    s.display();
    s.displayMarks();
}