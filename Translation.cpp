#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, rev;
    char temp;
    cin >> s >> t;

    rev = string(s.rbegin(), s.rend());
    //cout << rev;

    if(rev == t)
        cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}