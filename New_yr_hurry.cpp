#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[11];
    // pre-computation part
    for(int i = 0; i <= 10; i++)
    {
        if(i == 0)
        {
            arr[i] = 0;
            continue;
        }
        arr[i] = arr[i - 1] + (i * 5);
    }
    /// calculation part
    int n, k;
    int h = 20 * 60, total_m;

    cin >> n >> k;
    total_m = arr[n] + h + k;

    for(int i = n; i > 0; i--)
    {
        total_m = arr[i] + h + k;

        if(total_m <= 1440)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "0" << endl; // if he can't solve any problem

    return 0;
}