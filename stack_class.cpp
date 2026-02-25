#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    vector<int> data;
    public:
        void push(int x)
        {
            data.push_back(x);
        }

        void pop(){
            if(!data.empty())
                data.pop_back();
        }

        int top()
        {
            return data.back();
        }
};

int main()
{
    Stack s;
    s.push(10);
    cout << s.top()<< endl;
}