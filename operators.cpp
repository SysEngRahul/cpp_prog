#include<iostream>
using namespace std;
int main()
{
	char op;
	float a,b;
	cout << "enter first operand:";
	cin >> a;

	cout << "enter second operand:";
	cin >> b;

	cout << "enter operator either + or - or * or /:";
	cin >> op;

	cout << endl;

	switch(op)
	{
		case '+':
			{
				cout << "result is " << a+b << endl;
				break;
			}
		case '-':
			{
				cout << "result is " << a-b << endl;
				break;
			}
		case '*' :
			{
				cout << "result is " << a*b << endl;
				break;
			}

		case '/' :

			{
				cout << "result is " << a/b << endl;
				break;
			}

		default:
			{
				cout << "error:";
				break;
			}
	}
	return 0;
}
