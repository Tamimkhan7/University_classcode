#include <iostream>
using namespace std;
int even_odd(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        if (n%2==0)
        {
            cout<<"even : "<< n <<" ";
        }
        else
        {
            //cout<<endl;
            cout<<"Odd : "<< n <<" ";
        }
        return even_odd(n-1);
        cout<<endl;
    }
}

int main ()
{
    int n;
    cin>>n;
    even_odd(n);
}
