#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, same_sock, d1, d2;

    cin >> a >> b;
    same_sock = abs(a - b);

    if(a > b)
    {
        d1 = b;
        if(same_sock >= 2)
            d2 = same_sock / 2;
        else
            d2 = 0;
    }
    else
    {
        d1 = a;
        if(same_sock >= 2)
            d2 = same_sock / 2;
        else
            d2 = 0;
    }
    cout << d1 << " " << d2 << endl;

    return 0;
}