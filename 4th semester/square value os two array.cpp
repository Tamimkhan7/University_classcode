#include <bits/stdc++.h>
using namespace std;

int MAX_SIZE = 100;
int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], n;

    cout << "Enter the size of the arrays: ";
    cin >> n;
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int squared_arr1[MAX_SIZE], squared_arr2[MAX_SIZE];
    for (int i = 0; i < n; i++)
    {
        squared_arr1[i] = pow(arr1[i], 2);
        squared_arr2[i] = pow(arr2[i], 2);
    }
    cout << "The squared values of the first array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << squared_arr1[i] << " ";
    }
    cout << endl;

    cout << "The squared values of the second array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << squared_arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
