#include <bits/stdc++.h>
using namespace std;
class A
{
  int age = 29;
  string name = "Tamim";
public:
    friend class B;
};
void display(){
}
class B
{
public:
  void display (A ob)
  {
    cout << ob.age << endl;
    cout << ob.name << endl;
  }

};

int
main ()
{
  A ob1;
  B ob2;
  ob2.display (ob1);

}
