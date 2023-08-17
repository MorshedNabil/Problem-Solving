#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3;
    int grp = 1, n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> str1;
        if (n > 0)
        {
            if (str1[0] == str2[1])
                grp++;
        }

        str2 = str1; /// store the 2nd magnet in the str3 to use it in the next iteration for comparing
    }
    cout << grp << endl;

    return 0;
}