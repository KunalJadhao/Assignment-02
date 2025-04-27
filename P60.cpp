#include <iostream>
using namespace std;

int main()
{
    string sentence;
    int digits = 0, spaces = 0, alphabets = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++)
    {
        if (isdigit(sentence[i]))
        {
            digits++;
        }
        else if (isspace(sentence[i]))
        {
            spaces++;
        }
        else if (isalpha(sentence[i]))
        {
            alphabets++;
        }
    }

    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Alphabets: " << alphabets << endl;

    return 0;
}
