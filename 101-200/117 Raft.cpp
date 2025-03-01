//AzeTurk810;
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long;
int main() {
  int n,m;
  cin>>n>>m;
  vector<int> v(n);
  for(int &i:v)cin>>i;
  int l=0,r=1000,ans=0;
  while(l<=r)
  {
    int mid=(l+r)/2,sum=0;
    for(int &i:v)
    {
      sum+=i/mid;
    }
    if(sum>=m)
    {
      l=mid+1;
      ans=mid;
    }
    else{
      r=mid-1;
    }
    
  }
  cout<<ans;
}
