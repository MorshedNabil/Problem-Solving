#include <iostream>
using namespace std;

int main()
{
    int n, h, w = 0;

    cin >> n >> h;
    int frnd_h[n];

    for(int i = 0; i < n; i++)
    {
        cin >> frnd_h[i];

        if(frnd_h[i] > h)
            w = w + 2;
        else if(frnd_h[i] <= h)
            w = w + 1;
    }
    cout << w << endl;
    
    return 0;
}