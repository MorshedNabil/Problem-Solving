#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, count;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        count = 0;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        sort(arr, arr + n); // sorting the unsorted array

        for (int k = 0; k < n - 1; k++)
        {
            if (abs(arr[k] - arr[k + 1]) <= 1)
                count++;
        }

        if (count == n - 1)
            cout << "YES" << endl;
        
        else
            cout << "NO" << endl;
    }

    return 0;
}