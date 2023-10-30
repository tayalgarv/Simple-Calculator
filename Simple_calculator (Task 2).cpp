#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    system("CLS");
    cout << "\t\t\tWELCOME" << endl;
    cout << endl;
    char x;
    float a, b;
    cout << "Press 1 to Add two numbers." << endl;
    cout << "Press 2 to Subtract two numbers." << endl;
    cout << "Press 3 to Multiply two numbers." << endl;
    cout << "Press 4 to Divide two numbers." << endl;
again:
    cout << "Enter number:- ";
    cin >> x;
    if (!isdigit(x))
    {
        cout << "Please enter correct value" << endl;
        goto again;
    }
    if (x != '1' && x != '2' && x != '3' && x != '4')
    {
        cout << "Please enter correct value" << endl;
        goto again;
    }
    cout << "Enter first number:- ";
    cin >> a;
    cout << "Enter second number:- ";
    cin >> b;
    cout << endl;
    if (x == '1')
    {
        cout << "--> Sum is:- " << a + b;
    }
    else if (x == '2')
    {
        cout << "--> Difference is:- " << a - b;
    }
    else if (x == '3')
    {
        cout << "--> Product is:- " << a * b;
    }
    else if (x == '4')
    {
        cout << "--> Quotient is:- " << a / b;
    }

    cout << endl;
    cout << endl;
}