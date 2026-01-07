#include<iostream>
namespace room1
{
    void greet()
    {
        std::cout << "hello from room1!" << std::endl;
    }
}

namespace room2
{
    void greet()
    {
        std::cout << "hello from room2!" << std::endl;
    }
}

int main()
{
    room1::greet();

    room2::greet();

    return 0;
}
