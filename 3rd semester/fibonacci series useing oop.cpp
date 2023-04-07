#include <iostream>
using namespace std;
class fibonacci
{
    int t1=0, t2 = 1, t=0, i, n;
public:
    void display()
    {
        cin>>n;
        for (i=0; i<n; i++)
        {
            if (i==0)
            {
                cout<<t1<<" ";
            }
            else if (i==1)
            {
                cout<<t2<<" ";
            }
            else
            {
                t= t1+t2;
                t1=t2;
                t2=t;
                cout<<t<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    fibonacci p;
    p.display();

    return 0;
}
// 0 1 1 2 3 5
