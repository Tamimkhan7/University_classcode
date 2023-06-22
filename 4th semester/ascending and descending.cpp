#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n, greater<int>());

    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
