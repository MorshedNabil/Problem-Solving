#include <iostream>
using namespace std;

int main()
{
    int x = 0, n;
    string op;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> op;
        if(op[0] == 'X')
            if(op[1] == '+')
                x++;
            else
                x--;
        else
            if(op[0] == '+')
                ++x;
            else
                --x;
    }

    cout << x << endl;

    return 0;
}