#include<iostream>
#include<map>
#include<sstream>

using namespace std;

int main()
{
    string text = "hello world heelo hello hii hii";
    map<string, int > freq;

    stringstream ss(text);
    string word;

    while(ss >> word)
        freq[word]++;
    
    for(auto &p : freq)
        cout << p.first << " : " << p.second << endl;

}