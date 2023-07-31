#include <iostream>
using namespace std;

int main()
{
    int n, in = 0, remain = 0, out = 0, total, max = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> out >> in;
        total = (remain - out) + in; // when tram arrived at a stop total num of passengers after in and out
        remain = total; // the tram left the stop and now the remaining passengers in tram
        /// finding max capacity of the tram
        if(max < total)
            max = total;
    }
    cout << max << endl;

    return 0;
}