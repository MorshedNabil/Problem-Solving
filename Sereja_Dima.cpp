#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, se_sum, di_sum;
    se_sum = di_sum = 0;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i, j;
    i = 0;
    j = n - 1;
    int flag = 0;

    while (i <= j)
    {
        if (flag == 0) // sereja
        {
            if (arr[i] > arr[j])
            {
                se_sum = se_sum + arr[i];
                i++;
            }
            else
            {
                se_sum = se_sum + arr[j];
                j--;
            }
            flag = 1;
        }

        else // dima
        {
            if (arr[i] > arr[j])
            {
                di_sum = di_sum + arr[i];
                i++;
            }
            else
            {
                di_sum = di_sum + arr[j];
                j--;
            }
            flag = 0;
        }
    }

    cout << se_sum << " " << di_sum << endl;

    return 0;
}