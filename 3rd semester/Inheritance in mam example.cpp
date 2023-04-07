#include <bits/stdc++.h>
using namespace std;
class person
{
public:

    void display()
    {
        cout<<"My name is Tamim khan"<<endl;
        cout<<"My Hobby is playing cricket "<<endl;
    }
};
class student : public person
{
public:
    void display2()
    {
        cout<<"I love myself "<<endl;
        display();
    }
};

int main ()
{
    student p;
    p.display2();

    return 0;
}
