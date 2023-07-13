#include <iostream>
using namespace std;

int main()
{
    int lim, bob, count_yr = 0;
    cin >> lim >> bob;

    while(lim <= bob)
    {
        count_yr++;
        lim = lim * 3;
        bob = bob * 2;
    }
    cout << count_yr << endl;
    
    return 0;
}