#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, xSize, ySize;
    cin >> n;
    cin >> xSize;
    int x[200];

    for(int i = 0; i < xSize; i++)
    {
        cin >> x[i];
    }

    cin >> ySize;
    int t = xSize + ySize;

    for(int i = xSize; i < t; i++)
    {
        cin >> x[i];
    }
    //sorting...
    sort(x, x + t);

    int count = 0;
    for(int i = 0; i < xSize + ySize; i++)
    {
        if(x[i] == x[i + 1])
        {
            count++;
            i = i + 1;
        }
        else
            count++;
    }

    if(n == count)
        cout << "I become the guy." << endl;
    else 
        cout << "Oh, my keyboard!" << endl;

    return 0;
}