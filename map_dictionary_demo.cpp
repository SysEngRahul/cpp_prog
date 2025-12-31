#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string, int> age;
    age["rahul"] = 25;
    age["harsh"] = 25;

    for(auto &p:age)
        cout << p.first << " = "
<< p.second << endl;
}