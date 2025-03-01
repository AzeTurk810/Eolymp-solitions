//Desinged by AzeTurk810
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define pb push_back
#define mp make_pair

bool sdedir(int n)
{
    for(int i=2;n>=i*i;i++)
    if(n%i==0)return false;
    return true;
}

int main()
{
    int n,m,ans=0;
    bool t=1;
    cin>>n>>m;
    n--;
    while(n>0)
    {
        n--;
        m++;
        if(sdedir(m))
        {
            cout<<ans;t=0;
            return 0;
        }
        else
        {ans++;}
    }
    if(t)
    cout<<-1;
}
