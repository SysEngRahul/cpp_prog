#include<iostream>
#include<cmath>
using namespace std;

// ---------area functions--------------
double areaCircle(double radius)
{
    return M_PI * radius * radius;
}

double areaRectangle(double length, double width)
{
    return length * width;
}

double areaTriangle(double a, double b, double c)
{
    double s = (a+b+c) / 2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double areaSquare(double side)
{
    return side*side;
}

//--------circumference function-----------
double circCircle(double r)
{
    return 2* 3.14 * r;
}
double circRectangle(double length,  double width)
{
    return 2*(length + width);

}

double circTriangle(double a, double b, double c)
{
    return a+b+c;
}

double circSquare(double side)
{
    return 4*side;
}
//-------largest number-----------
template <typename T>
T largest(T a, T b, T c)
{
    return max(a, max(b,c));
}

//---------------menus------------------
void showMainMenu()
{
    cout <<  "\n======== MathMenu utility ===========\n";
    cout <<   "1. Area of geometrical figures\n";
    cout <<    "2. circumference of figures\n";
    cout <<     "3. find largest number\n";
    cout <<    "4. exit\n";
    cout <<    "choose an option boy!";


}

void showShapeMenu()
{
    cout << "\n choose a figure:\n";
    cout << "1.circle\n";
    cout << "2.rectangle\n";
    cout << "3. triangle\n";
    cout << "4. square\n";
    cout << "5. back to main menu\n";
    cout << "choice:";
}

//-----------main body--------------
int main()
{
    int choice;
    do
    {
         showMainMenu();
         cin >> choice;

         switch(choice)
         {
            case 1: 
            {
                int shape;
                showShapeMenu();
                cin >> shape;
                if(shape == 1)
                {
                    double r;
                    cout << "enter radius: ";
                    cin >> r;
                    cout << "area = "<< areaCircle(r) << endl;

                }
                else if(shape ==2)
                {
                    double l, w;
                    cout << "enter length and breadth:";
                    cin >> l >> w;
                    cout << "area = " << areaRectangle(l,w) << endl;
                }

                else if(shape == 3)
                {
                    double a,b,c;
                    cout << "area = " <<  areaTriangle(a,b,c) << endl;
                }

                else if(shape == 4)
                {
                    double s;
                    cout << "enter side: ";
                    cin >> s ;
                    cout << "area = " << areaSquare(s) << endl;
                }

                break;
            }

            case 2:
            {

                // circumference
                int shape;
                showShapeMenu();

                cin >> shape;
                if(shape == 1)
                {
                    double r;
                    cout << "enter radius: ";
                    cin >> r;
                    cout << "circumference = " << circCircle(r) << endl;
                }

                else if(shape == 2)
                {
                    double l,w;
                    cout << "enter the length and breadth: ";
                    cin >> l >> w;
                    cout << "circumference = "  << circRectangle(l,w) << endl;
                }

                else if(shape == 3)
                {
                    double a,b ,c;
                    cout << "enter 3 sides: ";
                    cin >> a >> b >> c ;
                    cout << "circumfernce = " << circTriangle(a,b,c) << endl;

                }

                else if(shape == 4)
                {
                    double s;
                    cout << "enter side: ";
                    cin >> s;
                    cout << "circumference = " << circSquare(s) << endl;
                }
                break;
            }

            case 3:
            {
                // largest number:
                double x,y,z;
                cout << "enter 3 numbers: ";
                cin >> x >> y >> z;
                cout << "largest = " << largest(x,y,z) << endl;
                break;

            }
            case 4:
            {
                cout << "exiting MAthMenu utility. Goodbye!\n";
                break;
            }
            

            default:
                cout << "invalid  choice.";
         }
    } 
    
    while (choice != 4);

    return 0;
    
}