#include <iostream>
using namespace std;
class member
{
    int n,i, fact=1;
public:
    void display()
    {
        cin>>n;
        for (i=1; i<=n; i++)
        {
            fact = fact*i;
        }
        cout<<fact<<endl;
    }
};
int main ()
{
    member p;
    p.display();

    return 0;
}
