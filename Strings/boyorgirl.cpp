#include <iostream>
using namespace std;
#include <set>
int main()
{
    set<char> res;
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    for (char ch : s)
    {
        res.insert(ch);
    }
    int n = res.size();
    if (n % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}