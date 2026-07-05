#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    if (n <= 10)
    {
        cout << s;
    }
    else
    {
        cout << s[0];
        cout << n - 2;
        cout << s[n - 1];
    }
}