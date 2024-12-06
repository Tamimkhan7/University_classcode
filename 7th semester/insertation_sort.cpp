#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int j = i - 1, x = a[i];
        while (j >= 0 and a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
    reverse(a, a + n);
    for (int i = 0; i< n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

// Time_complexity-O(n^2)
