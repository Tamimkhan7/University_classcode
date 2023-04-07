#include <bits/stdc++.h>
using namespace std;
class prime
{
    int n,i;
    public:
    void display()
    {
        cin>>n;
        for(i=2; i<=n; i++)
        {
            int c=0;
            for(int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    c++;
                    break;
                }
            }
            if(c==0 && n !=1)
            {
                cout<<i<<endl;
            }
        }
    }
};

int main()
{
    prime p;
    p.display();
}
