#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
  ll n;
  cin>>n;
  vector<ll> v(n);
  ll ans=1;
  for(int i=0;i<n;i++){
    cin>>v[i];
    ans^=v[i];
  }
  ll ans2=1;
  for(ll i=1;i<=n;i++){
ans2^=i;
  }
  ll res=ans^ans2;
  cout<<res<<"\n";
  
  return 0;
}