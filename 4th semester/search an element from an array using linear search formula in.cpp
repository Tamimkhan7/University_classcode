#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout << "Size of the array :";
    cin >> n;
    int arr[n];
    // cout << "Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num, c = 0, i;
    // cout << "Enter# element to be search :";
    cin >> num;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        cout << "element not found" << endl;
    else
        cout << "element found at position :" << i << endl;
}
