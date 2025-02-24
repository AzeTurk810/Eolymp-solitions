#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,m,sum=0,say=0;
    cin>>n;
    m=n;
    while(sum<0.5){
        sum+=1/n;
        n--;
        if(sum<=0.5){
            say++;
        }

    }
    cout<<m-say;
}
