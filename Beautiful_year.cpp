#include <iostream>
#include <string>
using namespace std;



int main()
{
    int yr, a, b, c, d, temp;
    cin >> yr;

    for( ; ; )
    {
        yr = yr + 1;
        // partitioning each digits of the yr
        a = yr / 1000;
        temp = yr % 1000;
        b = temp / 100;
        temp = temp % 100;
        c = temp / 10;
        d = temp % 10;

        if(a != b && b != c && c != d && d != a && a != c && b != d)
            break;
    }

    cout << yr << endl;

    return 0;
}