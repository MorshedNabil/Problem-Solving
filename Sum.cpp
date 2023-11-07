#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[3]; 
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }

        sort(arr, arr + 3);

        if(arr[2] == (arr[0] + arr[1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;     
    }

    return 0;
}