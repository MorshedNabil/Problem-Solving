#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int comp = 0;
//// convert each and every alphabets of the string into upper case////
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
//// comparing the transformed string to get which one is bigger///
    for(int i = 0; i < str1.length(); i ++)
    {
      if(str1[i] > str2[i])
      {
        comp = 1;
        break;
      }
      else if(str1[i] < str2[i])
      {
        comp = -1;
        break;
      }
      else 
      {
        comp = 0;
      }

    }
    cout << comp << endl;

    return 0;
}