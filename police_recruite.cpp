#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, crime = 0, police = 0;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> x;
        if(x == -1)
        {
            if(police > 0)
                police--;
            else
                crime++;
        }
        else
        {
            police = police + x;
        }
    }
    cout << crime << endl;

    return 0;
}