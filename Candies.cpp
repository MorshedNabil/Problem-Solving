#include <iostream>
using namespace std;

int main()
{
    int t, n, count;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        cin >> n;
        int price[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> price[i];
        }

        for (int i = 0; i < 2 * n - 1; i++)
        {
            count = 1;
            for (int j = i + 1; j < 2 * n; j++)
            {
                if (price[i] == price[j])
                {
                    count++;
                }
            }
            if (count >= 3)
            {
                cout << "NO\n";
                break;
            }
        }
        if(count < 3)
          cout << "YES\n";
    }
    return 0;
}
/*NOTE: here we are counting if there is any number which have repeated more than 3 times. Cause
then the repeated numbers can't be divided into two array of candy's price list */