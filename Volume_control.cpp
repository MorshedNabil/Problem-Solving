#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, initial_vol, final_vol, press;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> initial_vol;
        cin >> final_vol;

        press = abs(final_vol - initial_vol);
        cout << press << "\n";
    }

    return 0;
}