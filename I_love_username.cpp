#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0, last_max, last_min;
    cin >> t;
    int arr[t];
    cin >> arr[0];
    last_max = last_min = arr[0];

    for(int i = 1; i < t; i++)
    {
        cin >> arr[i];
        if(arr[i] > last_max)
        {
            x++;
            last_max = arr[i];
        }    
        else if(arr[i] < last_min)
        {
            x++;
            last_min = arr[i];
        }
    }

    cout << x << endl;

    return 0;
}