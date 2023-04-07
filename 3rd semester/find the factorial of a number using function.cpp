#include <iostream>
using namespace std;

    void display(int n)
    {
        int i, fact=1;
        for (i=1; i<=n; i++)
        {
            fact = fact*i;
        }
        cout<<fact<<endl;
    }
int main ()
{
   int n;
   cin>>n;
   display(n);

    return 0;
}
