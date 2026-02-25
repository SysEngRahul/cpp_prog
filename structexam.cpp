#include<iostream>
#include<string>

struct Student
{
    std::string name;
    int age;
    char grade;
};

int main()
{
    Student s;

    s.name = "rahul";
    s.age = 20;
    s.grade = 'A';

    std::cout << "name: " << s.name << std::endl;
    std::cout << "age: " << s.age << std::endl;
    std::cout << "grade" << s.grade << std::endl;

    return 0;
}
