#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, dif;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;

        dif = abs(a - b);

        if(dif == 0)
            cout << "0" << endl;
        else if(dif % 10 == 0)
            cout << dif / 10 << endl;
        else
            cout << (dif / 10) + 1 << endl;
    }

    return 0;
}