//AzeTurk810
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    a=1/a;
    b=1/b; 
    c=1/c;
    cout.precision(2);
    cout<<fixed<<1/(a+b+c);
}
