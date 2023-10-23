#include <bits/stdc++.h>
using namespace std;

int main()
{
    int per_shovel, x, total;
    cin >> per_shovel >> x;

    for(int i = 1; ; i++)
    {
        total = per_shovel * i;

        if((total % 10) == x || (total % 10) == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}