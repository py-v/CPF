#include <iostream>
#include <string>
using namespace std;

// Global variable
int globalValue = 100;

// 1. Without parameters and without return value
void displayMessage()
{
    cout << "Function Without Parameter and Without Return Value"<<endl;
    cout << "Hello! This function has no parameter and no return value."<<endl;
}

// 2. Without parameters and with return value
int getNumber()
{
    return 50;
}

// 3. With parameters and without return value
void displaySum(int a, int b)
{
    cout << "Function With Parameters and Without Return Value"<<endl;
    cout << "Sum = " << a + b << endl;
}

// 4. With parameters and with return value
int multiply(int a, int b)
{
    return a * b;
}

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Value inside function = " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Value inside function = " << x << endl;
}

// Local and Global Scope
void scopeDemo()
{
    int localValue = 20;

    cout << "Local variable inside function = "
         << localValue << endl;

    cout << "Global variable inside function = "
         << globalValue << endl;
}

// Function Overloading
void displayStudent(string name)
{
    cout << "Student Name : " << name << endl;
}

void displayStudent(string name, string branch)
{
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;
}

void displayStudent(string name, string branch, float percentage)
{
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;
    cout << "Percentage : " << percentage << "%" << endl;
}

int main()
{
    cout << "********************************************"<<endl;
    cout << " FUNCTION DESIGN AND PARAMETER ANALYZER"<<endl;
    cout << "********************************************"<<endl;

    // Part A - Function Design

    displayMessage();

    cout << "Function Without Parameter and With Return Value"<<endl;
    cout << "Returned Value = " << getNumber() << endl;

    displaySum(10, 20);

    cout << "Function With Parameters and With Return Value"<<endl;
    cout << "Multiplication = " << multiply(5, 4) << endl;

    // Part B - Parameter Passing

    cout << "--------------------------------------------"<<endl;
    cout << "CALL BY VALUE"<<endl;
    cout << "--------------------------------------------"<<endl;

    int value1 = 10;

    cout << "Before function call = " << value1 << endl;
    callByValue(value1);
    cout << "After function call = " << value1 << endl;

    cout << "--------------------------------------------"<<endl;
    cout << "CALL BY REFERENCE"<<endl;
    cout << "--------------------------------------------"<<endl;

    int value2 = 10;

    cout << "Before function call = " << value2 << endl;
    callByReference(value2);
    cout << "After function call = " << value2 << endl;

    // Part C - Scope and Visibility

    cout << "--------------------------------------------"<<endl;
    cout << "SCOPE AND VISIBILITY"<<endl;
    cout << "--------------------------------------------"<<endl;

    scopeDemo();

    cout << "Global variable outside function = "
         << globalValue << endl;

    // Part D - Function Overloading

    cout << "--------------------------------------------"<<endl;
    cout << "FUNCTION OVERLOADING"<<endl;
    cout << "--------------------------------------------"<<endl;

    displayStudent("Om D. Kalathiya");

    cout << endl;

    displayStudent("Om", "CE");

    cout << endl;

    displayStudent("Om", "CE", 85.20);

    cout << "--------------------------------------------"<<endl;
    cout << "Program Executed Successfully"<<endl;
    cout << "--------------------------------------------"<<endl;
          return 0;
}
