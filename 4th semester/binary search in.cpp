#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "size of the array" << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array from user" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cout << "Search for the index" << endl;
    cin >> x;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << "Found, The index of X is " << mid << endl;
            return 0;
        }
        else if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "X is not found" << endl;
}