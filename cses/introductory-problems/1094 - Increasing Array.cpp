#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
  ll n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  ll ans=0;
  for(ll i=1;i<n;i++){
      if(v[i]<v[i-1]){
          int temp=(v[i-1]-v[i]);
          v[i]+=temp;
          ans+=temp;
      }
  }
  cout<<ans<<"\n";
  
  return 0;
}