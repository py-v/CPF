#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int choice;

    // Variables for student registration
    string enrollment_no = "";
    string student_name = "";
    string branch = "";
    int semester = 0;
    string mobile_number = "";

    // Variables for marks
    int math = 0, physics = 0, cpf = 0;
    int total_marks = 0;
    double average_marks = 0.0;
    double percentage = 0.0;

    do {
        // Displaying the Main Menu
        cout << "\n----------------------------------------\n";
        cout << "      STUDENT RECORD MANAGEMENT SYSTEM  \n";
        cout << "----------------------------------------\n";
        cout << "               MAIN MENU                \n";
        cout << "1. Register New Student\n";
        cout << "2. Display Student Record\n";
        cout << "3. Enter Student Marks\n";
        cout << "4. Display Academic Result\n";
        cout << "5. Exit\n";
        cout << "----------------------------------------\n";
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n----------------------------------------\n";
                cout << "Student Registration\n";
                cout << "----------------------------------------\n";
                cout << "Enrollment Number : ";
                cin >> enrollment_no;
                cout << "Student Name      : ";
                cin.ignore(); // Clear the input buffer
                getline(cin, student_name);
                cout << "Branch            : ";
                cin >> branch;
                cout << "Semester          : ";
                cin >> semester;
                cout << "Mobile Number     : ";
                cin >> mobile_number;
                cout << "\nStudent Registered Successfully.\n";
                break;

            case 2:
                cout << "\n----------------------------------------\n";
                cout << "Student Record\n";
                cout << "----------------------------------------\n";
                if (enrollment_no == "") {
                    cout << "No student registered yet!\n";
                } else {
                    cout << "Enrollment Number : " << enrollment_no << "\n";
                    cout << "Student Name      : " << student_name << "\n";
                    cout << "Branch            : " << branch << "\n";
                    cout << "Semester          : " << semester << "\n";
                    cout << "Mobile Number     : " << mobile_number << "\n";
                }
                break;

            case 3:
                cout << "\n----------------------------------------\n";
                cout << "Enter Student Marks\n";
                cout << "----------------------------------------\n";
                cout << "Mathematics Marks                     : ";
                cin >> math;
                cout << "Physics Marks                         : ";
                cin >> physics;
                cout << "Computer Programming Foundation Marks : ";
                cin >> cpf;
                cout << "\nMarks Entered Successfully.\n";
                break;

            case 4:
                cout << "\n----------------------------------------\n";
                cout << "Academic Result\n";
                cout << "----------------------------------------\n";

                total_marks = math + physics + cpf;
                average_marks = total_marks / 3.0;
                percentage = average_marks; // Assuming max marks for each subject is 100

                cout << "Total Marks       : " << total_marks << "\n";
                cout << fixed << setprecision(2);
                cout << "Average Marks     : " << average_marks << "\n";
                cout << "Percentage        : " << percentage << "%\n\n";

                // Grading Criteria Logic
                if (total_marks == 0) {
                    cout << "Please enter student marks first (Choice 3).\n";
                } else {
                    string result = "PASS";
                    string grade;
                    string performance;

                    if (percentage >= 85) { grade = "O"; performance = "Outstanding"; }
                    else if (percentage >= 75) { grade = "A+"; performance = "Excellent"; }
                    else if (percentage >= 65) { grade = "A"; performance = "Very Good"; }
                    else if (percentage >= 55) { grade = "B"; performance = "Good"; }
                    else if (percentage >= 45) { grade = "C"; performance = "Pass"; }
                    else { result = "FAIL"; grade = "F"; performance = "Poor"; }

                    cout << "Result            : " << result << "\n";
                    cout << "Grade             : " << grade << "\n";
                    cout << "Performance       : " << performance << "\n";
                }
                break;

            case 5:
                cout << "\nThank You...\n";
                break;

            default:
                cout << "\nInvalid choice! Please choose a number between 1 and 5.\n";
        }
    } while (choice != 5);

    return 0;
}
