#include <iostream>
using namespace std;

int main()
{
    int n, a, b, a1, b1, a2, b2;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if((a == a1 || a == b1) && (b == a1 || b == b1) )
        {
            cout << "1\n";
        }
        else if((a == a2 || a == b2) && (b == a2 || b == b1))
        {
            cout << "2\n";
        }
        else 
          cout << "0\n";
    }

    return 0;
}