#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, l;
    string str, str2;
   // cin >> t;

    //for (int i = 0; i < t; i++)
  //  {
        cin >> str;
        l = str.length();
        cout << l << endl;
        /// making the string double
        for(int j = 0; j < 2 * l; j+2)
        {
            str2[j] = str[j]; 
            str2[j + 1] = str[j];
        }
        cout << str << endl;

        
        
   // }

    return 0;
}