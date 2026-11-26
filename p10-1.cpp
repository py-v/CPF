#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct AcademicInfo {
    int semester;
    float percentage;
    string grade;
};

struct ContactInfo {
    string mobileNumber;
    string emailId;
};

struct Student {
    string enrollmentNo;
    string name;
    string branch;
    AcademicInfo academic;
    ContactInfo contact;
};


void displayStudentDetails(const Student* studentPtr);
void updateContactInformation(Student* studentPtr, const string& newMobile, const string& newEmail);

int main() {
    int numStudents = 0;

    cout << "********************************************\n";
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      \n";
    cout << "********************************************\n";

    cout << "Enter Number of Students : ";
    cin >> numStudents;
    cin.ignore();

    Student* studentRecords = new(nothrow) Student[numStudents];
    if (studentRecords == nullptr) {
        cerr << "Memory allocation failed!\n";
        return 1;
    }

    cout << "--------------------------------------------\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << "\n";

        cout << "Enrollment Number : ";
        getline(cin, studentRecords[i].enrollmentNo);

        cout << "Student Name      : ";
        getline(cin, studentRecords[i].name);

        cout << "Branch            : ";
        getline(cin, studentRecords[i].branch);

        cout << "Semester          : ";
        cin >> studentRecords[i].academic.semester;

        cout << "Percentage        : ";
        cin >> studentRecords[i].academic.percentage;

        cout << "Grade             : ";
        cin >> studentRecords[i].academic.grade;
        cin.ignore(); // Clean buffer

        cout << "Mobile Number     : ";
        getline(cin, studentRecords[i].contact.mobileNumber);

        cout << "Email ID          : ";
        getline(cin, studentRecords[i].contact.emailId);
        cout << "--------------------------------------------\n";
    }

    cout << "Student Records\n";
    for (int i = 0; i < numStudents; i++) {
        displayStudentDetails(&studentRecords[i]);
    }

    delete[] studentRecords;
    studentRecords = nullptr;

    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}

void displayStudentDetails(const Student* studentPtr) {
    if (studentPtr == nullptr) return;

    cout << studentPtr->enrollmentNo << " "
              << studentPtr->name << " "
              << studentPtr->branch << "\n";

    cout << "Semester   : " << studentPtr->academic.semester << "\n";
    cout << "Percentage : " << fixed << setprecision(2) << studentPtr->academic.percentage << "\n";
    cout << "Grade      : " << studentPtr->academic.grade << "\n";

    cout << "Mobile     : " << studentPtr->contact.mobileNumber << "\n";
    cout << "Email      : " << studentPtr->contact.emailId << "\n";
    cout << "--------------------------------------------\n";
}

void updateContactInformation(Student* studentPtr, const string& newMobile, const string& newEmail) {
    if (studentPtr != nullptr) {
        studentPtr->contact.mobileNumber = newMobile;
        studentPtr->contact.emailId = newEmail;
    }
}
