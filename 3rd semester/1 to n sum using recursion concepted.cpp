#include <bits/stdc++.h>
using namespace std;
int summation(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        return n+summation(n-1);
    }
}
int main ()
{
    int n;
    cin>>n;
    int result = summation(n);
    cout<<result<<endl;

}
