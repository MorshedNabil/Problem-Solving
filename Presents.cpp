#include <iostream>
using namespace std;

int main()
{
    int n, ind;
    cin >> n;
    int arr[n], arr2[n];

    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr2[arr[i]] = i;
    }

    for(int k = 1; k <= n; k++)
    {
        cout << arr2[k] << " ";
    }
    cout << endl;

    return 0;
}

// 2 3 4 1 -> giver
// 1 2 3 4 -> index
// 4 1 2 3 -> taker

