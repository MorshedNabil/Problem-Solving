#include <iostream>
using namespace std;

int main()
{
    int n, danik = 0, anton = 0;
    string results;
    cin >> n >> results;

    for(int i = 0; i < results.length(); i++)
    {
        if(results[i] == 'A')
          anton++;
        else 
          danik++;
    }
    if(anton > danik)
      cout << "Anton\n";
    else if(anton < danik)
      cout << "Danik\n";
    else 
      cout << "Friendship\n";


    return 0;
}