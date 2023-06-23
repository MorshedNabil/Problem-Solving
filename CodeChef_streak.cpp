#include <iostream>
using namespace std;

int main()
{
    int n, om_stk, addy_stk, d, om_max, addy_max, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        om_stk = addy_stk = 0;
        om_max = addy_max = 0;
        cin >> d;
        int arr1[d], arr2[d];
//// counting om's streak
        for (int j = 0; j < d; j++)
        {
            cin >> arr1[j];
            if (arr1[j] >= 1)
                om_stk++;
            else
            {
                om_max = om_stk;
                om_stk = 0;
            }
        }
        if (om_max < om_stk)
            om_max = om_stk;
//// counting addy's streak
        for (int k = 0; k < d; k++)
        {
            cin >> arr2[k];
            if (arr2[k] >= 1)
                addy_stk++;
            else
            {
                addy_max = addy_stk;
                addy_stk = 0;
            }
        }
        if (addy_max < addy_stk)
            addy_max = addy_stk;
/// decision////
        if (om_max > addy_max)
            cout << "Om\n";
        else if (om_max < addy_max)
            cout << "Addy\n";
        else
            cout << "Draw\n";
    }

    return 0;
}