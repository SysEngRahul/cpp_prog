#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string text = "c++ is a powerful language";
    int vowel = 0, cons = 0, words = 1, lines = 1;

    for(char ch : text)
    {
        if(ch == 'a' || ch == 'e'||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I'||ch == 'O' ||ch == 'U' )
        {
            vowel++;
        }
        else if(isalpha(ch))
        {
            cons++;
        }
        else if(ch == ' ')
        {
            words++;
        }
        else if(ch == '\n')
        {
            lines++;
        }
    }

    cout << "vowels: " << vowel<< endl;
    cout << "consonants: " << cons << endl;
    cout << "words: " << words << endl;
    cout << "liness: " << lines<< endl;
}