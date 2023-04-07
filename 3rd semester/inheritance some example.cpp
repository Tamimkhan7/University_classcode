#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int age;
    string name;
    void display1()
    {
        cout<<age<<endl<<name<<endl;
    }
};
class B : public A
{
public:
    int id;
    void display2()
    {
        cout<<id<<endl;
        display1();
    }
};
int main()
{
    B ob;
    ob.age = 28;
    ob.name = "Tamim";
    ob.id = 22;
    ob.display2();
}
