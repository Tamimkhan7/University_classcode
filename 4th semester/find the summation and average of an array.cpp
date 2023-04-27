#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Size of the array :";
    cin >> n;
    int arr[n];
    cout<<"Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "summation is :" <<sum << endl;
    int ave = sum / n;
    cout << "average is :" <<ave << endl;
}
