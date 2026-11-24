#include <iostream>
using namespace std;
void printAscending(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    printAscending(i + 1, n);
}
void printDescending(int i) {
    if (i < 1) return;
    cout << i << " ";
    printDescending(i - 1);
}
int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}
void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << (n % 2);
}

int main() {
    cout << "Name: Dhruvi Sedaliya | ID: 26DCE101\n\n";
    cout << "********************************************\n";
    cout << "      RECURSIVE UTILITY ANALYZER\n";
    cout << "********************************************\n\n";

    int n;
    cout << "--------------------------------------------\n";
    cout << "Part A - Recursive Traversal\n";
    cout << "--------------------------------------------\n";
    cout << "Enter a Positive Integer N : "; cin >> n;
    cout << "1 to N : "; printAscending(1, n); cout << "\n";
    cout << "N to 1 : "; printDescending(n);   cout << "\n";

    int num;
    cout << "\n--------------------------------------------\n";
    cout << "Part B - Recursive Number Processing\n";
    cout << "--------------------------------------------\n";
    cout << "Enter a Positive Integer : "; cin >> num;
    cout << "Reversed Number  : " << reverseNumber(num) << "\n";
    cout << "Sum of Digits    : " << sumOfDigits(num)   << "\n";

    int dec;
    cout << "\n--------------------------------------------\n";
    cout << "Part C - Recursive Number Conversion\n";
    cout << "--------------------------------------------\n";
    cout << "Enter a Decimal Number : "; cin >> dec;
    cout << "Binary Representation  : ";
    if (dec == 0) cout << "0";
    else decimalToBinary(dec);
    cout << "\n";

    cout << "\n--------------------------------------------\n";
    cout << "Part D - Comparative Analysis\n";
    cout << "--------------------------------------------\n";
    cout << "Recursive solutions are more readable and closely follow the\n";
    cout << "problem definition, but use more function calls and stack\n";
    cout << "memory compared to equivalent iterative solutions.\n";
    return 0;
}
