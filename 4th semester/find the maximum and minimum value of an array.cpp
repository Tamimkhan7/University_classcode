#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"size of the array :";
    cin >> n;
    int arr[n];
    cout<<"Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = arr[0];
    int mini = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
            maxi = arr[i];
        else if (mini > arr[i])
            mini = arr[i];
    }
    cout << "Maximum value " << maxi << endl;
    cout << "minimum value " << mini << endl;
}
