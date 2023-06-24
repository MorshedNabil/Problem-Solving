#include <iostream>
using namespace std;

int main()
{
  int w, div;
  cin >> w;
  if (w % 2 != 0 || w == 2)
    div = w - (w - 1);
  else
    div = w - (w - 2);

  if (div % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}
/*  efficient way
void altr()
{
  int w, div;
  cin >> w;
  if (w % 2 != 0 || w == 2)
    cout << "NO\n";
  else 
    cout << "YES\n";

  return 0;
}*/