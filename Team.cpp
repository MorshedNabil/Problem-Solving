#include <iostream>
using namespace std;

int main()
{
    int n, solve = 0, count, sure;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        count = 0;
        for(int j = 0; j < 3; j++)
        {
            cin >> sure;
            if(sure == 1)
              count++;
        }
        if(count >= 2)
          solve++;
    }
    cout << solve << "\n";

    return 0;
}