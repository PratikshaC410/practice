#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> res;

    for (char ch : s)
    {
        res.insert(ch);
    }

    if (res.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}