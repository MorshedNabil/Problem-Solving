#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int p_drink = (k * l) / nl;
    int p_lime = c * d;
    int p_salt = p / np;

    int min_toast = min(min(p_drink, p_lime), p_salt) / n;

    cout << min_toast << endl;

    return 0;
}