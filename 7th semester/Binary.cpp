#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int x;
    cin >> x;
    int l = 1, r = n;
    while (r >= l)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
        {
            cout << "YES" << '\n';
            return 0;
        }
        else if (x > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << "NO" << '\n';
}

// Time_complexity- O(logn)
