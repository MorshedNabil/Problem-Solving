#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    int exist[26] = {0};
    cin >> n;
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower); // transforming the whole string into lower case
    // when we get a character we are storing true in the same index of 'exist' array as the ascii code of the char
    for(int i = 0; i < n; i++)
    {
        exist[str[i] - 'a'] = 1;
    }

    for(int j = 0; j < 26; j++)
    {
        if(exist[j] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}

// jackdawslovemybigsphinxofquarz