
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Command-line argument missing\n";
        return 1;
    }

    std::string str;
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    if (std::strcmp(argv[1], "toupper") == 0)
    {
        for (std::size_t i = 0; i < str.length(); ++i)
        {
            str[i] = std::toupper(static_cast<unsigned char>(str[i]));
        }
    }
    else if (std::strcmp(argv[1], "tolower") == 0)
    {
        for (std::size_t i = 0; i < str.length(); ++i)
        {
            str[i] = std::tolower(static_cast<unsigned char>(str[i]));
        }
    }
    else
    {
        std::cout << "Unmatched second command-line argument\n";
        return 1;
    }

    std::cout << "The string is now: " << str << std::endl;
    return 0;
}

