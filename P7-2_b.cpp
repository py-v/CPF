#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string er;
    string word;
    int n = 1;
    int word_count = 0;
    int space_count = 0;

    cout << "Enter a sentence: ";
    getline(cin, er);

    for (int i = 1; i <= er.length(); i++)
    {
        if (i == 1)
        {
            cout << "first letter is : " << er[i - 1] << endl;
        }
        else if (er.length() == i)
        {
            cout << "last letter is : " << er[i - 1] << endl;
        }
    }


for (int i = 0; i <= er.length(); i++)
{
    if (i == er.length() || er[i] == ' ')
    {
        if (!word.empty())
        {
            cout << "The word is : " << word << endl;
            word.clear();
        }
    }
    else
    {
        word += er[i];
    }
}
    return 0;
}