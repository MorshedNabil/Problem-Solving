#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x;
    cin >> t;

    if (t == 1)
    {
        cin >> x;
        cout << "0" << endl;
    }
    else
    {
        int arr[t], total = 0, max;

        for (int i = 0; i < t; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + t);
        max = arr[t - 1];

        for(int j = 0; j < t - 1; j ++)
        {
            total = total + (max - arr[j]);
        }

        cout << total << endl;
    }

    return 0;
}