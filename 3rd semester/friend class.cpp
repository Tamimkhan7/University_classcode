#include <bits/stdc++.h>
using namespace std;

class A
{
    int a =101;
    string name = "Tamim";
public :
    friend class B;
};

class B
{
public:
    void display (A ob)
    {
        //cin>>a>>b;
        cout<<ob.a<<endl;
        cout<<ob.name<<endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);



    return 0;
}
