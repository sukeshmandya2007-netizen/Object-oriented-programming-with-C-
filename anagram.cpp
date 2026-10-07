#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    if (word1.length() != word2.length())
    {
        cout << "Not an Anagram" << endl;
        return 0;
    }

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if (word1 == word2)
        cout << "Anagram" << endl;
    else
        cout << "Not an Anagram" << endl;

    return 0;
}