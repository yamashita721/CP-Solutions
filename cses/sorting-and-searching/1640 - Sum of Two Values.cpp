#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
  int n, tar;
  cin>>n>>tar;
  vector<ll> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  bool tru=false;
  map<ll,ll> m;
  for(int i=0;i<n;i++){
    ll a=tar-v[i];
    if(m.find(a)!=m.end()){
        cout<<m[a]+1<<" "<<i+1;
        tru=true;
        break;
    }
    else{
        m[v[i]]=i;
    }
  }
  if(!tru){
      cout<<"IMPOSSIBLE"<<endl;
  }
  
  
  return 0;
}