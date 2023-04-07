#include <bits/stdc++.h>
using namespace std;
class A
{
    double base = 20;
    double hight = 56;
    friend void area(A);
};
void area(A ob)
{
    double c = 0.5*ob.base*ob.hight;
    cout<<c<<endl;
}
int main()
{
    A ob;
    area (ob);
}
