#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the array value from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorting array :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
