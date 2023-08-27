#include <iostream>
using namespace std;

int main()
{
    int t, a, b, x, y;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a % b == 0)
            cout << "0" << endl;
        else
        {
            x = a % b;
            y = b - x;
            cout << y << endl;
        }

    }
    return 0;
}