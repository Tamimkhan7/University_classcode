#include <bits/stdc++.h>
using namespace std;

class A
{
    int a=102,b=852;
public:
    friend class B;
};
class B
{
public:
    void display(A ob)
    {
        cout<<ob.a<<endl;
        cout<<ob.b<<endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
}
