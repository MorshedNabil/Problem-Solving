#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    if(n % 2 == 0)
        cout << "4" << " " << n - 4 << endl; /// if the number is even
    else
        cout << "9" << " " << n - 9 << endl; /// if the number is odd

    return 0;
}