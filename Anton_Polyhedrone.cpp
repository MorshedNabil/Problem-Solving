#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0, face[] = {4, 6, 8, 12, 20};
    char ch[] = {'T', 'C', 'O', 'D', 'I'};
    string s;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < 5; j++)
        {
            if(s[0] == ch[j])
            {
                total = total + face[j];
                break;
            }
        }
    }

    cout << total << endl;

    return 0;
}