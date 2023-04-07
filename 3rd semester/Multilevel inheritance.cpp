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
class c : public B
{
public:
    double result;
    void display3 ()
    {
        cout<<"My result is "<<result<<endl;
        display2();
    }

};

int main ()
{
    c p;
    p.name = "Tamim khan";
    p.id = 1024;
    p.age = 22;
    p.result = 3.88;
    p.display3();

    return 0;
}
