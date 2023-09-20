#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s4 = s1 + s2;

    if(s3.length() != s4.length())
    {
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i = 0; i < s4.length() ; i++)
    {
        for(int j = 0; j < s4.length(); j++)
        {
            if(s4[i] == s4[j])
                a++;
        }

        for(int k = 0; k < s3.length(); k++)
        {
            if(s4[i] == s3[k])
                b++;
        }

        if(a != b)
        {
            cout << "NO" << endl;
            return 0;
        }
        a = 0;
        b = 0;
    }
    cout << "YES" << endl;

    return 0;
}
