#include <iostream>
using namespace std;

//1
int iterativeFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial = " << fact<<endl;;
}

//2
int recursiveFactorial(int n)
{
    if(n==0 || n==1)
        return 1;

    return n * recursiveFactorial(n-1);

}

//3
int iterativeFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return n;
    }

    int first = 0, second = 1;
    for (int i = 1; i <= n; ++i) {

        cout<< first<<" ";
        int nextTerm = first + second;
        first = second;
        second = nextTerm;
    }
    cout<<endl;
}

//4
int recursiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}
    int main()
    {
        int n;
        cout << "Enter no: ";
        cin >> n;
        cout<<endl;

        iterativeFactorial(n);

        cout<<"recursive factorial: "<<recursiveFactorial(n)<<endl;
        cout<<"iterative fibbonachi: "<<iterativeFibonacci(n)<<endl;
        cout << "Recursive Fibonacci Series: ";
                for (int i = 0; i < n; ++i) {
                    cout << recursiveFibonacci(i) << " ";
                }
                cout << endl;
        return 0;
}
