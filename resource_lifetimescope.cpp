#include<iostream>
using namespace std;

class resource
{
    public:
     resource()
     {
        cout << "acquired\n";
     }

     ~resource()
     {
        cout << "released\n";
     }
};

int main(){
{
    resource  r;
}
cout << "out of scope\n";
}