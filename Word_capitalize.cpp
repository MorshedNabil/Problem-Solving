#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if(s[0] >= 97 && s[0] <= 122)
    {
        s[0] = s[0] - 32; /// by subtracting 32 from the ascii val of first char we will get the 
                        ////  uppercase of the char(if the char not in uppercase)
    }
    cout << s << "\n";

    return 0;
}