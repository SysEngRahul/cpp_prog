#include<iostream>
namespace first_space
{
    void func()
    {
        std::cout << "inside first_space" << std::endl;
    }
}

using namespace first_space;

int main()
{
    func();
    return 0;
}
