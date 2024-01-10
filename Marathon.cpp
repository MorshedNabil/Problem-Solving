#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, three_ppl[3], in_frnt, t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        in_frnt = 0;
        cin >> a;

        for (int k = 0; k < 3; k++)
        {
            cin >> three_ppl[k];
        }

        for (int j = 0; j < t; j++)
        {
            if (a < three_ppl[j])
                in_frnt++;
        }

        cout << in_frnt << endl;
    }

    return 0;
}