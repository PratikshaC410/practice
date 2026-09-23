#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    if (s.length() >= 3 && s[0] == '1' && s[1] == '0' && s[2] != '0') {
        int x = stoi(s.substr(2));
        if (x >= 2) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}