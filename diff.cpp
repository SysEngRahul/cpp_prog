#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char findthedifference(string s, string t) {
        int XOR = 0;
        for (char &ch : s) {
            XOR ^= ch;
        }
        for (char &ch : t) {
            XOR ^= ch;
        }
        return (char)XOR;
    }
};

int main() {
    Solution solution;

    string s = "abcd";
    string t = "abcde";

    char diffChar = solution.findthedifference(s, t);
    cout << "The different character is: " << diffChar << endl;

    return 0;
}