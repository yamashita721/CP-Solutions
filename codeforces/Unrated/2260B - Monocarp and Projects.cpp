#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int t;
  cin>>t;
  while(t--){
      ll x,y,k;
      cin>>x>>y>>k;
      ll count=0;
      int gap=y-x;
      while(x<=gap && k>0){
          count+=y%x;
          x++;
          y++;
          k--;
      }
      if(k>0){
          count+=k*gap;
      }
      cout<<count<<endl;
  }
  return 0;
}