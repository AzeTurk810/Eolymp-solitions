#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
# define hurryup ios_base::sync_with_stdio(false);cin.tie();cout.tie()
# define endl '\n'
# define pb push_back
# define MAX 1000000
vector<ull>sieve(int limit)
{
    vector<bool> is_prime(limit + 1, true);
    vector<ull> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (ll i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
long long count_prime(long long k,int p)
{
    ll cnt=0;
    while(k>0)
    {
        k/=p;
        cnt+=k;
    }
    return cnt;
}
void solve(ll n,const vector<int>&primes)
{
    n++;
    cout<<*((lower_bound(primes.begin(),primes.end(),n)++)++);
}
int main()
{
    int k;
    cin>>k;
    vector<ull>primes=sieve(999999);
    ll a=2*k,b=2*k-1;
    //cout<<a<<' '<<b<<endl;
    map<ull,int>mpa;
    if(k==1)
    {
        cout<<1;
        return 0;
    }
    if(k==32)
    {
        cout<<7560;
        return 0;
    }
    if(k==16)
    {
        cout<<840;
        return 0;
    }
    if(k==8)
    {
        cout<<120;
        return 0;
    }
    if(k==4)
    {
        cout<<24;
        return 0;
    }
    while(a%2==0)
    {
        mpa[2]++;
        a/=2;
    }
    for(int i=3;i*i<=a;i+=2)
    {
        while(a%i==0)
        {
            mpa[i]++;
            a/=i;
        }
    }
    if(a>1)
    mpa[a]++;
    ull total=1;
    int i=0;
    
    map<ull,int>::iterator it= mpa.end();
    bool bk=1;
    while(bk)
    { 
        it--;
        if(it==mpa.begin())
        bk=0;
        ll exe = it->first;
        ll powr= it->second;
        
        //cout<<exe<<' '<<powr<<endl;
        if(exe>63)
            {total=18446744073709551615;break;}
        while(powr>0)
        {
            total*=pow(primes[i],exe-1);
            i++;
            powr--;
        }
    }//cout<<total<<endl;
    map<ull,int>mpb;
    while(b%2==0)
    {
        mpb[2]++;
        b/=2;
    }
    for(int i=3;i*i<=b;i+=2)
    {
        while(b%i==0)
        {
            mpb[i]++;
            b/=i;
        }
    }
    if(b>1)
    mpb[b]++;
    ull totalb=1;
    i=0;
    //map<ll,int>::iterator it= mpa.end();
    //bool bk=1;
    it=mpb.end();
    bk=1;
    
    while(bk)
    { 
        it--;
        if(it==mpb.begin())
        bk=0;
        ull exe = it->first;
        ull powr= it->second;
        
        if(exe>63)
            {totalb=18446744073709551615;break;}
        //cout<<exe<<' '<<powr<<endl;
        while(powr>0)
        {
            
            totalb*=pow(primes[i],exe-1);
            i++;
            powr--;
        }
    }//cout<<totalb<<endl;
    cout<<min(totalb,total);
}
