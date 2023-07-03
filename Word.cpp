#include <iostream>
#include <bits/stdc++.h>  // for transform()
#include <string>  // for toupper and tolower
using namespace std;

int main()
{
    string s1;
    int up = 0, low = 0;
    cin >> s1;

    for (int i = 0; i < s1.length(); i++)
    {
        if (isupper(s1[i]))
            up++;
        else if (islower(s1[i]))
            low++;
    }
    if (low >= up)
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    else
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

    cout << s1 << "\n";

    return 0;
}