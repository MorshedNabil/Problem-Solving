#include <iostream>
using namespace std;

int main()
{
    int k, n, w, total = 0, loan;
    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++)
    {
        total = i * k + total;
    }
    if(total > n)
      loan = total - n;
    else 
      loan = 0;
      
    cout << loan << "\n";

    return 0;
}