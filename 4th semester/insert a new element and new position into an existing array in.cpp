#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cout << "Size of the array :";
    cin >> n;
    int arr[n];
    int elem, pos;
    // cout << "Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position insert the value :";
    cin >> pos;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    cout << "Enter the element insert the value :";
    cin >> elem;
    arr[pos] = elem;
    cout << "New array with inserted element: ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
