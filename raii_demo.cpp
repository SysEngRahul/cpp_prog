#include<iostream>
#include<fstream>
using namespace std;

class file
{
    ifstream f;
    public:
    file(string name) 
    {
        f.open(name);
        cout << "opened\n";
    }
    ~file() 
    {
        f.close();
        cout << "closed\n";
    }
};

int main()
{
    file f("test.txt");
}