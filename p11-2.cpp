#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << "********************************************" << endl;
    cout << " FILE ORGANIZATION & FILE OPERATIONS UTILITY" << endl;
    cout << "********************************************" << endl;

    string line;

    ofstream outFile("Document.txt");

    if (!outFile)
    {
        cout << "Error: Unable to Create Document.txt" << endl;
        return 1;
    }

    cout << "\nDocument.txt Created Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Enter File Contents" << endl;

    while (true)
    {
        getline(cin, line);

        if (line == "END")
            break;

        outFile << line << endl;
    }

    outFile.close();

    cout << "Data Written Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    ifstream inFile("Document.txt");

    if (!inFile)
    {
        cout << "Error: Unable to Open Document.txt" << endl;
        return 1;
    }

    cout << "\nReading Document.txt" << endl;

    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    if (inFile.eof())
    {
        cout << "End of File Reached Successfully" << endl;
    }

    inFile.close();

    cout << "--------------------------------------------" << endl;

    cout << "\nCreating BackupDocument.txt" << endl;

    ifstream sourceFile("Document.txt");

    if (!sourceFile)
    {
        cout << "Error: Unable to Open Source File" << endl;
        return 1;
    }

    ofstream backupFile("BackupDocument.txt");

    if (!backupFile)
    {
        cout << "Error: Unable to Create Backup File" << endl;
        return 1;
    }

    while (getline(sourceFile, line))
    {
        backupFile << line << endl;
    }

    sourceFile.close();
    backupFile.close();

    cout << "Contents Copied Successfully" << endl;

    ifstream verifyFile("BackupDocument.txt");

    if (verifyFile)
    {
        cout << "Backup File Created Successfully" << endl;
    }
    else
    {
        cout << "Error: Backup File Verification Failed" << endl;
    }

    verifyFile.close();

    cout << "--------------------------------------------" << endl;

    fstream file("Document.txt", ios::in);

    if (!file)
    {
        cout << "Error: Unable to Open File" << endl;
        return 1;
    }

    cout << "\nRandom File Access" << endl;

    cout << "Current File Position : "
         << file.tellg() << endl;

    // Read first line to find second line position
    string firstLine;
    getline(file, firstLine);

    streampos secondLinePosition = file.tellg();

    cout << "Moving File Pointer..." << endl;

    file.seekg(secondLinePosition);

    cout << "Displaying Contents after Repositioning" << endl;

    getline(file, line);
    cout << line << endl;

    cout << "--------------------------------------------" << endl;

    cout << "Resetting File Pointer" << endl;

    file.clear();
    file.seekg(0, ios::beg);

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    cout << "--------------------------------------------" << endl;
    cout << "File Operations Completed Successfully" << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}
