#include <bits/stdc++.h>
using namespace std;
class person
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
class student : public person
{
public:
    int id;
    void display2()
    {
        cout<<"Id is "<<id<<endl;
        display();
    }
};
int main ()
{
    student p;
    p.name = "Tamim khan";
    p.id = 1024;
    p.age = 22;
    p.display2();
    return 0;
}
