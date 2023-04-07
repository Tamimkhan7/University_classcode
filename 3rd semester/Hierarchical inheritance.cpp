#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    string name;
    int age;
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
    }
};
class B : public A
{
public:
    int id;
    void display2()
    {
        cout<<"Id is "<<id<<endl;
        display();
    }
};
class c : public A
{
public:
    double result;
    void display3 ()
    {
        cout<<"My result is "<<result<<endl;
        display2();
    }
};

class d : public A
{
public:
    float k;
    void display4()
    {
        cout<<"My typing speed is "<<k<<endl;
        display3();
    }
};
int main ()
{
    d p;
    p.name = "Tamim khan";
    p.id = 1024;
    p.age = 22;
    p.result = 3.88;
    p.k = 60;
    p.display4();

    return 0;
}
