#include <iostream>
using namespace std;

int main()
{
    int n, a, x, y;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        cin >> a;

        if(a >= x && a < y)
        {
            cout << "Yes\n";
        }
        else
          cout << "NO\n";

    }

    return 0;
}