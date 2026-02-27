#include<iostream>
using namespace std;

int main()
{
    string name = "rahul upadhyay";
    cout << name[0];

    for(int i = 1; i< name.length(); i++)
    {
        if(name[i-1] == ' ')
        {
            cout << "." << name[i];
        }
    }
}