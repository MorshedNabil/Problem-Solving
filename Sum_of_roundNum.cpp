#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, value;
    vector <int> n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> value;
        int power = 1;
        
        while(value > 0)
        {
            if(value % 10 > 0)
            {
                n.push_back((value % 10) * power);
            }
            power = power * 10;
            value = value / 10;
        }
        cout << n.size() << endl;

        for(int i : n)
        {
            cout << i << " ";
        }
        cout << endl;
        n.clear();
    }

    return 0;
}