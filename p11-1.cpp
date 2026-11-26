#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int globalVar = 100;

int main()
{
    cout << "********************************************" << endl;
    cout << " PROGRAM EXECUTION & ERROR HANDLING" << endl;
    cout << "              ANALYZER" << endl;
    cout << "********************************************" << endl;

    cout << "\nCompile-time and Run-time Memory" << endl;

    int localVar = 200;

    int *dynamicVar = new int;
    *dynamicVar = 300;

    cout << "Global Variable Value : " << globalVar << endl;
    cout << "Local Variable Value : " << localVar << endl;
    cout << "Dynamic Memory Value : " << *dynamicVar << endl;

    cout << "--------------------------------------------" << endl;

    cout << "\nLow-level Error Demonstration" << endl;

    int maxValue = numeric_limits<int>::max();

    cout << "Maximum Integer Value : " << maxValue << endl;
    cout << "Arithmetic Overflow Observed (simulated safely)" << endl;

    cout << "--------------------------------------------" << endl;

    cout << "\nPointer Aliasing" << endl;

    int number = 50;
    int *ptr1 = &number;
    int *ptr2 = &number;

    cout << "Original Value : " << *ptr1 << endl;

    *ptr1 = 75;

    cout << "Updated Value : " << *ptr2 << endl;
    cout << "Both Address Variables Refer to the Same Memory Location" << endl;

    cout << "--------------------------------------------" << endl;

    cout << "\nMemory Leak Demonstration" << endl;

    int *memory = new int(500);

    cout << "Dynamic Memory Allocated" << endl;

    delete memory;
    memory = nullptr;

    cout << "Memory Released Successfully" << endl;

    delete dynamicVar;
    dynamicVar = nullptr;

    cout << "--------------------------------------------" << endl;

    cout << "\nArithmetic Operation" << endl;

    double dividend, divisor;

    cout << "Enter Dividend : ";

    if (!(cin >> dividend))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        return 1;
    }

    cout << "Enter Divisor : ";

    if (!(cin >> divisor))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        return 1;
    }

    if (divisor == 0)
    {
        cout << "Error : Division by Zero is not Allowed." << endl;
    }
    else
    {
        cout << "Result : " << dividend / divisor << endl;
    }

    cout << "--------------------------------------------" << endl;

    cout << "\nFile Operation" << endl;

    ifstream file("nonexistent.txt");

    if (!file.is_open())
    {
        cout << "Unable to Open File." << endl;
    }
    else
    {
        cout << "File Opened Successfully." << endl;
        file.close();
    }

    cout << "--------------------------------------------" << endl;
    cout << "\nProgram Executed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
