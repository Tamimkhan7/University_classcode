#include <iostream>
using namespace std;
inline float mul(float x, float y)
{
    return (x*y);
}
inline double div (double x, double y )
{
    return (x/y);
}
int main ()
{
    float a= 12.345;
    float b = 9.82;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
}
