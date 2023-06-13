#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n >= 1 && n <= 50)
    {
        cout << "100\n";
    }
    else if (n >= 51 && n <= 100)
    {
        cout << "50\n";
    }
    else 
      cout << "0\n";

    return 0;
}