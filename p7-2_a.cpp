#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
    char paragraph[500], extra[200], keyword[50], word[50];
    char copied[500];
    cout << "********************************************"<<endl;
    cout << "        DOCUMENT TEXT ANALYZER"<<endl;
    cout << "********************************************"<<endl;
    cout << "Enter Paragraph: ";
    cin.getline(paragraph, 500);

    // Part A - Text Analysis
    int characters = strlen(paragraph);
    int words = 0, alphabets = 0, digits = 0, special = 0;

    bool inWord = false;

    for (int i = 0; paragraph[i] != '\0'; i++)
    {
        if (isalpha(paragraph[i]))
            alphabets++;
        else if (isdigit(paragraph[i]))
            digits++;
        else if (paragraph[i] != ' ')
            special++;

        if (paragraph[i] != ' ' && !inWord)
        {
            words++;
            inWord = true;
        }
        else if (paragraph[i] == ' ')
        {
            inWord = false;
        }
    }
    cout << "--------------------------------------------"<<endl;
    cout << "Text Analysis"<<endl;
    cout << "--------------------------------------------"<<endl;
    cout << "Characters : " << characters << endl;
    cout << "Words : " << words << endl;
    cout << "Alphabets : " << alphabets << endl;
    cout << "Digits : " << digits << endl;
    cout << "Special Characters : " << special << endl;

    // Part B - String Extraction
    int first = 0, last;

    while (paragraph[first] == ' ')
        first++;

    last = strlen(paragraph) - 1;

    while (last >= 0 && paragraph[last] == ' ')
        last--;

    cout << "--------------------------------------------"<<endl;
    cout << "String Extraction"<<endl;
    cout << "--------------------------------------------"<<endl;

    cout << "First Character : " << paragraph[first] << endl;
    cout << "Last Character : " << paragraph[last] << endl;

    cout << "First Word : ";
    for (int i = first; paragraph[i] != ' ' && paragraph[i] != '\0'; i++)
        cout << paragraph[i];

    cout << "\nLast Word : ";

    int start = last;
    while (start >= 0 && paragraph[start] != ' ')
        start--;

    for (int i = start + 1; i <= last; i++)
        cout << paragraph[i];

    cout << endl;

    // Part C - Concatenation
    cout << "--------------------------------------------"<<endl;
    cout << "Concatenation"<<endl;
    cout << "--------------------------------------------"<<endl;

    cout << "Enter Additional Sentence: ";
    cin.getline(extra, 200);

    strcat(paragraph, " ");
    strcat(paragraph, extra);

    cout << "Updated Paragraph : " << paragraph << endl;

    // Part D - Pattern Matching
    cout << "--------------------------------------------"<<endl;
    cout << "Pattern Matching"<<endl;
    cout << "--------------------------------------------"<<endl;

    cout << "Enter Search Word: ";
    cin.getline(keyword, 50);

    char *position = strstr(paragraph, keyword);

    if (position != NULL)
    {
        cout << "Keyword Found" << endl;
        cout << "First Occurrence Position : "
             << position - paragraph + 1 << endl;
    }
    else
    {
        cout << "Keyword Not Found" << endl;
    }

    // Part E - String Transformation
    char upper[500], lower[500], reverseText[500];

    strcpy(upper, paragraph);
    strcpy(lower, paragraph);
    strcpy(reverseText, paragraph);

    for (int i = 0; upper[i] != '\0'; i++)
        upper[i] = toupper(upper[i]);

    for (int i = 0; lower[i] != '\0'; i++)
        lower[i] = tolower(lower[i]);

    reverse(reverseText, reverseText + strlen(reverseText));

    cout << "--------------------------------------------"<<endl;
    cout << "String Transformation"<<endl;
    cout << "--------------------------------------------"<<endl;

    cout << "Uppercase : " << upper << endl;
    cout << "Lowercase : " << lower << endl;
    cout << "Reverse : " << reverseText << endl;

    // Palindrome
    cout << "\nEnter Word for Palindrome Check: ";
    cin.getline(word, 50);

    int len = strlen(word);
    bool palindrome = true;

    for (int i = 0; i < len / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[len - i - 1]))
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Result : Palindrome" << endl;
    else
        cout << "Result : Not Palindrome" << endl;

    // Part F - Standard String Functions
    cout << "--------------------------------------------"<<endl;
    cout << "Standard String Functions"<<endl;
    cout << "--------------------------------------------"<<endl;

    cout << "Length : " << strlen(paragraph) << endl;

    strcpy(copied, paragraph);
    cout << "String Copied Successfully" << endl;

    if (strcmp(paragraph, copied) == 0)
        cout << "Comparison Result : Equal" << endl;
    else
        cout << "Comparison Result : Not Equal" << endl;

    cout << "Concatenation : Successful" << endl;

    if (strstr(paragraph, keyword) != NULL)
        cout << "Substring Search : Found" << endl;
    else
        cout << "Substring Search : Not Found" << endl;

    cout << "toupper() : Successful" << endl;
    cout << "tolower() : Successful" << endl;
    return 0;
}
