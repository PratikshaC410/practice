#include <iostream>
#include <string>
#include <utility>

using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    
    swap(a[0], b[0]);
    
    cout << a << " " << b << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}