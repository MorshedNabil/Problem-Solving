#include <iostream>
using namespace std;

int main()
{
    int n, x, y;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        if(x + y > 6)
          cout << "YES\n";
        else
          cout << "NO\n";
    }

    return 0;
}