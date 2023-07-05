#include <iostream>
using namespace std;

int main()
{
    string str;
    int count_0, count_1;
    count_0 = count_1 = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            count_1++;
            count_0 = 0;
        }
        else
        {
            count_1 = 0;
            count_0++;
        }
        if (count_0 == 7 || count_1 == 7)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}