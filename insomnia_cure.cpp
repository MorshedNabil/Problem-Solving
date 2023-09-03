#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, t, count = 0;
    cin >> k >> l >> m >> n >> t;

    for(int i = 1; i <= t; i++)
    {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0 )
            count++;
    }

    cout << count << endl;
    
    return 0;
}