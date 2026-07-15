#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr;
        cin >> arr;

        int max_time = 0;

        for (int start = 0; start < n; start++)
        {
            if (arr[start] == '*')
                continue;
            if (start > 0 && arr[start - 1] == '#')
                continue;

            int end = start;
            while (end < n && arr[end] == '#')
            {
                end++;
            }
            end--;

            int l = start, r = end;
            int cnt = 0;
            for (int i = 0; i < (end - start + 1); i++)
            {
                if (l > r)
                    break;

                if (arr[l] == '#' && arr[r] == '#')
                {
                    cnt++;
                    if ((r - l + 1) <= 2)
                        break;
                    l = l + 1;
                    r = r - 1;
                }
                else if (arr[l] == '*' && arr[r] == '*')
                    continue;
                else if (arr[l] == '*' && arr[r] == '#')
                {
                    l = l + 1;
                }
                else if (arr[l] == '#' && arr[r] == '*')
                {
                    r = r - 1;
                }
            }

            max_time = max(max_time, cnt);
        }

        cout << max_time << "\n";
    }
    return 0;
}