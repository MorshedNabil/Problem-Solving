#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '4' || str[i] == '7')
          count++;
    }

    if(count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}