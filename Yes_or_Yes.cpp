#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s, x;
    x = "YES";
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> s;
        for(int j = 0; j < 3; j++)
        {
            int c = s[j];
            if(islower(c))
            {
                s[j] = toupper(c);
            }

        }

        if(x.compare(s) == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}