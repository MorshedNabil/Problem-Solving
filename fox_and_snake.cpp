#include <iostream>
using namespace std;

int main()
{
    int n, m, flag = 1;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0) // even
            {
                cout << "#";
            }
            else // odd
            {
                if (flag == 1 && j == m - 1)
                    cout << "#";
                else if (flag == 0 && j == 0)
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << endl;
        if (i % 2 != 0) // the flag will chng its value after every odd row
        {
            if (flag == 0)
                flag = 1;
            else
                flag = 0;
        }
    }

    return 0;
}