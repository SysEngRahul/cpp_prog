#include<iostream>
using namespace std;

int main()
{
    int number = 42;
    int guess;
    int attempts = 0;

    cout << "=== guess the number game====" << endl;
    while(true)
    {
        cout << "enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > number)
        {
            cout << "too high! try again" << endl;
        }
        else if(guess < number)
        {
            cout << "too low! try again" << endl;
        }

        else
        {
            cout << "correct! you guessed in "
                 << attempts << " attempts. "<< endl;
            break;
        }
    }

    return 0;
}