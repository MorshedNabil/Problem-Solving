#include <iostream>
using namespace std;

int main()
{
    int n, count;
    string s1, s2 = "codeforces";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        count = 0;
        for (int j = 0; j < s1.length(); j++)
        {
            if(s1[j] != s2[j])
              count++;            
        }
        cout << count << "\n";
    }

    return 0;
}