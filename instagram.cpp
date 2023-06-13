#include <iostream>
using namespace std;

int main()
{
    int n, foll_r, foll_in;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> foll_in;
        cin >> foll_r;

        if (foll_in > (10 * foll_r))
          cout << "YES\n";
        else 
          cout << "NO\n";
    }

    return 0;
}