#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    string s;
    char temp;
    int min_ind, count = 0;
    getline(cin, s); // in the set the characters are separated by comma and the comma is folloed by a space as space is in the input so we are getting the input using getline()

    set<char> k;

    for(int i = 0; i < s.length() - 1; i++)
    {
        if(isalpha(s[i])) // if the s[i] is an alphabet then store it in the set
            k.insert(s[i]); // it is a ordered set so if we insert same elements multiple times it will store it only one time
    }
// when we will print the set we will see that the characters which have been given multiple times they are not available in the set 
// beacuase it is a ordered set so it will remove the same elements and store it only one time; ordered set stores distinct elements in it
    /*for(char x : k)
    {
        cout << x << endl; 
    } */ 
    cout << k.size() << endl;

    return 0;
}
