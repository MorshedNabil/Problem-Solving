#include <iostream>
using namespace std;

int main()
{
    string name;
    int count = 0, rep, l;
    cin >> name;

    for(int i = 0; i < name.length(); i++)
    {
        rep = 0;
        for(int j = i + 1; j < name.length(); j++)
        {
            if(name[i] == name[j])
              rep = 1;
        }
        if(rep == 1)
          count++;
    }
    l = name.length() - count;
    if(l % 2 == 0)
      cout << "CHAT WITH HER!\n";
    else 
      cout << "IGNORE HIM!\n";

    return 0;
}