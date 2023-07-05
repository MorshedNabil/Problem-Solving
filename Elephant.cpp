#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    while (n != 0)
    {
        count++; // we are counting the number of moves he have done to go from 0 pos to n pos
                 // Elephant can go 5 4 3 2 1 stpes at a time. So when he is going forward
                 // at a move we are counting it.
        if(n >= 5)
          n = n - 5; // elephant has gone 5steps forward
        else if(n >= 4)  
          n = n - 4;  // elephant has gone 4steps forward
        else if(n >= 3)
          n = n - 3;  // elephant has gone 3steps forward
        else if(n >= 2)
          n = n - 2;  // elephant has gone 2steps forward
        else if(n >= 1)
          n = n - 1;  // elephant has gone 1steps forward
    }
    cout << count << "\n"; // And at last we are printing printing how many moves he have to 
                           // do to reach his friends home which is in the n position

    return 0;
}