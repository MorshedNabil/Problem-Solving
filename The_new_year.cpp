#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    int t_dist = (arr[1] - arr[0]) + (arr[2] - arr[1]);

    cout << t_dist << endl;

    return 0;
}