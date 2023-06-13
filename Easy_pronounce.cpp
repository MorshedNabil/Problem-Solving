#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m, count = 0, flag = 0;
        cin >> m;
        char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
        string word;

        cin >> word;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (word[i] == vowel[j])
                {
                    flag = 0;
                    break;
                }
                else
                  flag = 1;
            }
            if (flag == 1)
            {
                count++;
                flag = 0;
            }
            else 
              count = 0;
            if (count == 4)
                break;
        }
        if (count == 4)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}