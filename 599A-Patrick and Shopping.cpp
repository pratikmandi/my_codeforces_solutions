#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
 
int main()
{
    ll d1,d2,d3,a,b,c,d;
    cin>>d1>>d2>>d3;
    a=d1+d2+d3;
    b=2*(d1+d3);
    c=2*(d2+d3);
    d=2*(d1+d2);
 
    cout<<min(min(a,b),min(c,d));
    return 0;
}