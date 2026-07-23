#include <iostream>

class Solution
{
public:
    vector<string> reorderLogFiles(vector<string> &logs)
    {
        vector<string> letters, digits;

        for (string &log : logs)
        {
            int pos = log.find(' ');

            if (isdigit(log[pos + 1]))
                digits.push_back(log);
            else
                letters.push_back(log);
        }

        sort(letters.begin(), letters.end(),
             [](const string &a, const string &b)
             {
                 int posa = a.find(' ');
                 int posb = b.find(' ');

                 string ida = a.substr(0, posa);
                 string idb = b.substr(0, posb);

                 string ca = a.substr(posa + 1);
                 string cb = b.substr(posb + 1);

                 if (ca == cb)
                     return ida < idb;

                 return ca < cb;
             });

        letters.insert(letters.end(), digits.begin(), digits.end());

        return letters;
    }
};