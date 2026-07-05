#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool printedWord = false;

    for (int i = 0; i < s.length();)
    {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB")
        {
            if (printedWord)
            {
                cout << " ";
                printedWord = false;
            }
            i += 3;
        }
        else
        {
            cout << s[i];
            printedWord = true;
            i++;
        }
    }

    return 0;
}