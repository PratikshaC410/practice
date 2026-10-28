#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[101][101];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1 ||
                i == n / 2 || j == n / 2)
            {
                sum += matrix[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}
