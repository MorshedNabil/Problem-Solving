#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int arr[n][2];
//// input
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
//// compare
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(arr[i][0] == arr[j][1])
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}