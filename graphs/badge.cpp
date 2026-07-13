#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n))
        return 0;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i];
    }
    for (int a = 1; a <= n; ++a)
    {
        vector<bool> visited(n + 1, false);
        int current_student = a;
        while (!visited[current_student])
        {
            visited[current_student] = true;
            current_student = p[current_student];
        }
        cout << current_student << (a == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}