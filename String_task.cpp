#include <bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin >> str;
    /// deleting vowels
    regex r("[aeiouyAEIOUY]");
    str = regex_replace(str, r, "");
    /// upper to lower case
    
    for (int i = 0; i < str.length(); i++)
    {
        if(isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    //// printing string with dots
    for(int i = 0; i < str.length(); i++)
    {
        cout << "." << str[i];
    }
    cout << endl;

    return 0;
}