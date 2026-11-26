#include <iostream>
#include <iomanip>

using namespace std;

struct CompositeTypeA {
    char charMember;
    double doubleMember;
    int intMember;
};

struct CompositeTypeB {
    double doubleMember;
    int intMember;
    char charMember;
};

union SharedMemoryUnion {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    cout << "********************************************\n";
    cout << "  COMPOSITE DATA REPRESENTATION ANALYZER   \n";
    cout << "********************************************\n";

    cout << "Composite Data Type A\n";
    cout << "Size : " << sizeof(CompositeTypeA) << " Bytes\n";
    cout << "--------------------------------------------\n";

    cout << "Composite Data Type B\n";
    cout << "Size : " << sizeof(CompositeTypeB) << " Bytes\n";
    cout << "--------------------------------------------\n";
    cout << "Padding and Alignment Observed\n";
    cout << "--------------------------------------------\n";

    cout << "Shared Memory Representation\n";

    SharedMemoryUnion u;

    u.intVal = 120;
    cout << "Integer Value   : " << u.intVal << "\n";


    u.floatVal = 120.00f;
    cout << "Floating Value  : " << fixed << setprecision(2) << u.floatVal << "\n";

    u.charVal = 'x';
    cout << "Character Value : " << u.charVal << "\n";
    cout << "--------------------------------------------\n";

    cout << "After Updating Floating Value\n";
    u.floatVal = 500.50f;
    cout << "Integer Value Changed\n";
    cout << "Character Value Changed\n";
    cout << "--------------------------------------------\n";

    cout << "Trade-off Analysis\n";
    cout << "Structure\n";
    cout << "Separate Memory for Every Member\n";
    cout << "Suitable for Storing Complete Records\n";
    cout << "--------------------------------------------\n";
    cout << "Union\n";
    cout << "Shared Memory for All Members\n";
    cout << "Suitable for Memory-efficient Applications\n";
    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
