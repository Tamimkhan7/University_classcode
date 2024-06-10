#include <iostream>
using namespace std;

void sum(int n, int m)
{
    int result = n+m;
    cout<<result<<endl;
}
void sum(int n, int m, int c)
{
    int result = n+m+c;
    cout<<result<<endl;
}

int main ()
{
    int n,m,c;
    cout<<"Enter the two variable : ";
    cin>>n>>m;
    sum(n, m);

    cout<<"Enter the three variable : ";
    cin>>n>>m>>c;
    sum(n, m, c);

    return 0;
}
