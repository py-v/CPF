
#include <iostream>
using namespace std;

// User-defined function
void memoryDemo() {
    int localValue = 100;

    cout << "\n--------------- Stack Memory ---------------\n";
    cout << "Local Variable Value : " << localValue << endl;
    cout << "Memory Address       : " << &localValue << endl;

    // Dynamic memory allocation
    int *heapValue = new int(250);

    cout << "\n---------- Dynamically Allocated Memory ----------\n";
    cout << "Allocated Value      : " << *heapValue << endl;
    cout << "Memory Address       : " << heapValue << endl;

    delete heapValue;
    heapValue = nullptr;
}

int main() {
    cout << "********************************************\n";
    cout << "       MEMORY ORGANIZATION ANALYZER\n";
    cout << "********************************************\n";

    // Part A: Stack and Heap Memory
    memoryDemo();

    // Part B: Multi-level Referencing
    int value = 50;

    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "\n---------- Multi-level Referencing ----------\n";
    cout << "Original Value : " << value << endl;
    cout << "Single-level Address : " << ptr1 << endl;
    cout << "Double-level Address : " << ptr2 << endl;
    cout << "Triple-level Address : " << ptr3 << endl;
    cout << "Value through 1 level : " << *ptr1 << endl;
    cout << "Value through 2 levels : " << **ptr2 << endl;
    cout << "Value through 3 levels : " << ***ptr3 << endl;

    // Part C: Memory Safety
    cout << "\n--------------- Memory Safety ---------------\n";

    // Null pointer
    int *nullPtr = nullptr;

    if (nullPtr == nullptr) {
        cout << "Null Reference : Safe (not dereferenced)\n";
    }

    // Invalid pointer demonstration
    int *invalidPtr = new int(100);
    delete invalidPtr;
    invalidPtr = nullptr;

    cout << "Memory Released Successfully\n";
    cout << "Reference Reset to nullptr\n";
    cout << "Invalid Reference : Unsafe to Access\n";

    // Uninitialized pointer demonstration
    int *uninitializedPtr;

    cout << "Uninitialized Address Variable : Unsafe to Access\n";
    // Do not read or dereference uninitializedPtr.

    // Part D: Observation
    cout << "\n--------------- Observation ---------------\n";
    cout << "Local variables use automatic storage.\n";
    cout << "Dynamic memory is allocated using new.\n";
    cout << "Pointers provide single and multiple-level access.\n";
    cout << "Null and invalid pointers must not be dereferenced.\n";
    cout << "Dynamic memory should be released after use.\n";

    cout << "\nProgram Executed Successfully\n";

    return 0;
}
