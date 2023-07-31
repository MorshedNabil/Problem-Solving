#include <iostream>
using namespace std;

int main()
{
    string str;
    int c1, c2, c3;
    c1 = c2 = c3 = 0;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+')
            continue;
        else
        {
            if (str[i] == '1')
                c1++;
            else if (str[i] == '2')
                c2++;
            else
                c3++;
        }
    }
    /// print the string
    for (int k = 0; k < str.length(); k++)
    {
        while (c1 != 0)
        {
            if(c1 > 1)
                cout << "1+";
            else if(c1 == 1 && (c2 >= 1 || c3 >= 1))
                cout << "1+";
            else
                cout << "1";
            c1--;
        }
        while (c2 != 0)
        {
            if(c2 > 1)
                cout << "2+";
            else if(c2 == 1 && c3 >= 1)
                cout << "2+";
            else
                cout << "2";
            c2--;
        }
        while (c3 != 0)
        {
            if(c3 > 1)
                cout << "3+";
            else
                cout << "3";
            c3--;
        }
    }
    cout << endl;

    return 0;
}