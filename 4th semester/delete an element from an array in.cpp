#include <iostream>
using namespace std;

int main()
{
    int n, pos, i;

    cout << "Enter the size of an array ";
    cin  >> n;
    int a[n];
    cout << "Enter the value in an array ";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the position ";
    cin  >> pos;

    for(i = pos; i < n; i++)
    {

        a[i] = a[i+1];
    }

    for(i = 0; i < n-1; i++)
    {

        cout<<a[i]<<" ";

    }
}
