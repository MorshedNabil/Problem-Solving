#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, ind = 0;
        cin >> n;
        int arr[n];

        for(int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        /// if the 1st value is non equal
        if(arr[0] != arr[1] && arr[1] == arr[2])
        {
            ind = 1;
        }
        else
        {
            int x = arr[0]; /// uporer if the false hoa te bujha jay je arr[0] thaka value ta emon ekta value jeta shobar equal
            for(int j = 1; j < n; j++)
            {
                if(arr[j] != x)
                {
                    ind = j + 1;
                }

            }

        }
        cout << ind << endl;
    }
}