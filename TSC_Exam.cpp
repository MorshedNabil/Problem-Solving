#include <iostream>
using namespace std;

int main()
{
    int n, drag[3], sloth[3], drag_t, sloth_t;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        drag_t = sloth_t = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> drag[j];
            drag_t = drag_t + drag[j];
        }
        for (int j = 0; j < 3; j++)
        {
            cin >> sloth[j];
            sloth_t = sloth_t + sloth[j];
        }

        if (drag_t > sloth_t)
            cout << "DRAGON\n";
        else if (drag_t < sloth_t)
            cout << "SLOTH\n";
        else
        {
            if (drag[0] > sloth[0])
                cout << "DRAGON\n";
            else if (drag[0] < sloth[0])
                cout << "SLOTH\n";
            else
            {
                if (drag[1] > sloth[1])
                    cout << "DRAGON\n";
                else if (drag[1] < sloth[1])
                    cout << "SLOTH\n";
                else
                {
                    if (drag[2] > sloth[2])
                        cout << "DRAGON\n";
                    else if (drag[2] < sloth[2])
                        cout << "SLOTH\n";
                    else
                        cout << "TIE\n";
                }
            }
        }
    }

    return 0;
}