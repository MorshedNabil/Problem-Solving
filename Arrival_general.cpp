#include <iostream>
using namespace std;

int main()
{
    int n, max_ind = 0, min_ind = 0;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++)
    {
        if(arr[max_ind] < arr[i])
            max_ind = i;
        else if(arr[min_ind] >= arr[i])
            min_ind = i;
    }

    if(max_ind > min_ind)
        min_ind++;
    cout << max_ind + (n - 1) - min_ind << endl;

    return 0;
}