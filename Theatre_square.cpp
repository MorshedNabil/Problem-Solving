#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a, H_count, W_count, total;

    cin >> n >> m >> a;

    if (n % a == 0)
    {
        H_count = n / a;
    }
    else
    {
        H_count = (n / a) + 1;
    }

    if (m % a == 0)
    {
        W_count = m / a;
    }
    else
    {
        W_count = (m / a) + 1;
    }

    total = H_count * W_count;

    cout << total << endl;

    return 0;
}