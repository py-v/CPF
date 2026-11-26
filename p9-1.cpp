#include <iostream>
using namespace std;

int main() {
    int number = 25;
    char letter = 'A';
    float percentage = 85.60;
    int *pointer = &number;
    int values[5] = {10, 20, 30, 40, 50};

    cout << "********************************************\n";
    cout << "MEMORY ADDRESS EXPLORER\n";
    cout << "********************************************\n";

    cout << "\nInteger Value: " << number << endl;
    cout << "Memory Address: " << &number << endl;
    cout << "Character Value: " << letter << endl;
    cout << "Memory Address: " << (void*)&letter << endl;
    cout << "Floating Value: " << percentage << endl;
    cout << "Memory Address: " << &percentage << endl;

    cout << "\nIndirect Referencing\n";
    cout << "Stored Value: " << *pointer << endl;
    *pointer = 30;
    cout << "Modified Value: " << number << endl;

    cout << "\nArray using Index\n";
    for (int i = 0; i < 5; i++)
        cout << values[i] << " ";

    cout << "\nArray using Address-based Access\n";
    for (int i = 0; i < 5; i++)
        cout << *(values + i) << " ";

    cout << "\nBoth methods access the same array elements.\n";
    return 0;
}
