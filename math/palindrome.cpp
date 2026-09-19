#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd_count = 0;
    for (int count : freq) {
        if (count % 2 != 0) {
            odd_count++;
        }
    }

    if (odd_count - k <= 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}