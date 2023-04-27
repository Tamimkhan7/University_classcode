#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of the array :";
    cin >> n;
    string s[n];
    cout<<"Enter the array from user :";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout<<"Showed my favorite friend :";
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;

    }
}
