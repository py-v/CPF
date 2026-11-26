
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student {
    string enrollmentNo;
    string name;
    float percentage;
    string grade;
};

// Display student records using an address
void displayStudents(Student *ptr, int n) {
    cout << "\n----------- Student Records -----------\n";
    cout << left << setw(15) << "Enrollment"
         << setw(20) << "Name"
         << setw(12) << "Percentage"
         << "Grade\n";

    for (int i = 0; i < n; i++) {
        Student *current = ptr + i;

        cout << left << setw(15) << current->enrollmentNo
             << setw(20) << current->name
             << setw(12) << fixed << setprecision(2)
             << current->percentage
             << current->grade << '\n';
    }
}

// Calculate academic summary using address-based access
void academicSummary(Student *ptr, int n) {
    float total = 0;
    float highest = ptr->percentage;
    float lowest = ptr->percentage;

    for (int i = 0; i < n; i++) {
        Student *current = ptr + i;

        total += current->percentage;

        if (current->percentage > highest)
            highest = current->percentage;

        if (current->percentage < lowest)
            lowest = current->percentage;
    }

    cout << "\n----------- Academic Summary -----------\n";
    cout << "Class Average Percentage : "
         << fixed << setprecision(2) << total / n << "%\n";
    cout << "Highest Percentage      : " << highest << "%\n";
    cout << "Lowest Percentage       : " << lowest << "%\n";
}

int main() {
    int n;

    cout << "********************************************\n";
    cout << " DYNAMIC STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    // Dynamic memory allocation
    Student *students = new Student[n];

    // Accept student details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Enrollment Number: ";
        cin >> students[i].enrollmentNo;

        cout << "Student Name: ";
        getline(cin >> ws, students[i].name);

        cout << "Percentage: ";
        cin >> students[i].percentage;

        cout << "Grade: ";
        cin >> students[i].grade;
    }

    // Display records using address-based function calls
    displayStudents(students, n);

    // Access records using pointer arithmetic
    cout << "\n----------- Address-Based Access -----------\n";

    for (int i = 0; i < n; i++) {
        Student *current = students + i;

        cout << "Student " << i + 1
             << " Address: " << static_cast<void *>(current)
             << ", Name: " << current->name << '\n';
    }

    // Calculate academic summary
    academicSummary(students, n);

    // Release allocated memory
    delete[] students;
    students = nullptr;

    cout << "\nDynamic Memory Released Successfully\n";
    cout << "Address Variable Reset Successfully\n";
    cout << "\nProgram Executed Successfully\n";

    return 0;
}
