#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n, orange = 0;
    cin >> n;
    int x[n];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
        orange = x[i] + orange;
    }

    double total = (double)orange / n;

    cout << fixed << setprecision(12) << total << endl;

    return 0;
}