#include <iostream>
using namespace std;

int main()
{
    int n, s, k;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> k;
        int arr[s];

        for(int j = 0; j < s; j++)
        {
            cin >> arr[j];
        }

        for(int j = 0; j < s; j++)
        {
            if(k >= arr[j])
            {
                cout << "1";
                k = k - arr[j];
            }
            else 
              cout << "0";
        }
        cout << "\n";
    }

    return 0;
}