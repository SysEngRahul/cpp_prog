#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
        int empId;
        string name;
        float basicSalary;

    public:
        void getDetails()
        {
            cout << "enter employee ID:";
            cin >> empId;
            cin.ignore();

            cout << "enter employee name:";
getline(cin,name);

            cout << "enter basic monthly salary:";
            cin>> basicSalary;
        }

        void displayDetails()
        {
            cout << "\n --- employee details-----\n";
            cout << "employee ID : " << empId << endl;
            cout << "name    : " << name << endl;
        }

        void displaySalary()
        {
            cout << "\n--- Salary details-----\n";
            cout << "monthly salary : " << basicSalary << endl;
        }
};

int main()
{
    Employee emp;
    int choice;

    do
    {
        cout << "\n ==== Employee menu=====\n";
        cout << "1. enter employee details\n";
        cout << "2. display employee details\n";
        cout << "3. display monthly salary\n";
        cout << "4. exit\n";
        cout << "enter your choice:";
        cin >> choice;

        switch(choice)
        {
            case 1:
                emp.getDetails();
                break;
            case 2:
                emp.displayDetails();
                break;

            case 3:
                emp.displaySalary();
                break;

            case 4:
                cout << "exiting program....\n";
                break;

            default:
                cout << "invalid choice. try again later.\n";
        }
    }

    while(choice != 4);

    return 0;


}

