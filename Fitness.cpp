#include <iostream>
using namespace std;

int main()
{
    int n, kil, total;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> kil;
        total = kil * 2 * 5;
        cout << total << endl;
    }

    return 0;
}