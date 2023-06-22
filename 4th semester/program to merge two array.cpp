#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "size of the array :";
    cin >> n;
    int k = n + n;
    int arr[n], arr2[n], arr3[k];
    cout << "Input from user first array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr3[i] = arr[i];
    }
    cout << endl;
    cout << "Input from user second array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        arr3[i + n] = arr2[i];
    }
    cout << endl;
    cout << "After merging the two array" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
