#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "size of the array :";
    cin >> n;
    int arr[n], arr1[n], arr3[n];
    cout << endl;
    cout << "Input from user first array :";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Input from user second array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr[i] + arr1[i];
    }
    cout << "summation between two arrays ";
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
