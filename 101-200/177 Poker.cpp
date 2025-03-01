#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
# define hurryup ios_base::sync_with_stdio(false);cin.tie();cout.tie()
# define endl '\n'
# define fori for(ll i=0; i<n; i++)
# define forj for(ll j=0; j<m; j++)
# define fors for(ll i=0; i<s.size(); i++)
# define forv for(ll i=0; i<v.size(); i++)
//# define mp make_pair
# define pb push_back
# define eb emplace_back
# define ff first
# define ss second
# define sorta sort(a,a+n)
# define sortv sort(v.begin(), v.end())
# define sorts sort(s.begin(), s.end())
# define mod 1000000007
# define INF 1e9+7
# define enterv while(cin>>i)v.pb(i);
# define print(v) for(ll i = 0; i < v.size(); i++)cout<<v[i]<<" "
map<ll,ll>mp;
void quvvet(int n,map<ll,ll>&mp)
{

  if(n>1)
  {
    for(int i=2; i<=n; i++)
    {
      if(n%i==0)
      {
        if(mp[i]==0)mp[i]=1;
        else mp[i]++;
        quvvet(n,mp);
        break;
      }
    }
  }
}
// bool ikiquv(int n)
// {
//     while(n>1)
//     {
//         if(n%2!=0)
//         return 0;
//         n/=2;
//     }
//     return 1;
// }
// int ebob(int a,int b)
// {
//     return __gcd(a,b);
// }
// int ekob(int a,int b)
// {
//     return a*b/ebob(a,b);
// }
// bool palindromdur(string s)
// {
//     string s1=s;
//     reverse(s1.begin(),s1.end());
//     if(s1==s)
//     return 1;
//     return 0;
// }
std::vector<bool>v(10000,0) ;
ll ters(ll i)
{
  int j=0;
  while(i>0)
  {
    j=j*10+i%10;
    i/=10;
  }
  return j;
}
int main()
{
  int t,say=0;
  cin>>t;
  
  while(t--)
  {
      map<string,ll>mp;
    string s;
    vector<int>v;
    for(int i=0; i<5; i++)
    {
      cin>>s;
      mp[s]++;
    }
    for(auto ty:mp)
    {
        //cout<<ty.first<<' '<<ty.second<<' ';
      v.push_back(ty.second);
      say+=ty.second;
    }
    sortv;
    for(int i=0; i<1; i++)
    {
        
      if(v[i]==5)
      {
        cout<<"poker"<<endl;
      }
      else if(v[i]==2 && v[i+1]==3)
        cout<<"full house"<<endl;
      else if(v[i+1]==4)
        cout<<"quads"<<endl;
      else if(v[i+2]==3&& v.size()==3)
      cout<<"set"<<endl;
      else if(v[i+1]==2 && v[i+2]==2)
      cout<<"two pair"<<endl;
      else if(v[i+3]==2 && v.size()==4)
      cout<<"pair"<<endl;
      else
      cout<<"no pair"<<endl;
    }
  }
}
