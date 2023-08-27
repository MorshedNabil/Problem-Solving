#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int shoe[4], count = 0, min_ind, temp;

    for (int i = 0; i < 4; i++)
    {
        cin >> shoe[i];
    }
    //sorting...
    sort(shoe, shoe + 4);

    for (int i = 0; i < 3; i++)
    {
        if(shoe[i] == shoe[i + 1]) // if the shoe's colors are same the we have to chng one so counter will be increase
            count++;
    }

    cout << count << endl;

    return 0;
}