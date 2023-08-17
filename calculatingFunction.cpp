#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n, total = 0;
    cin >> n;

    if(n % 2 == 0)
        total = n / 2;
    else 
        total = (n - 1) / 2 - n;

    cout << total << endl;

    return 0;
}