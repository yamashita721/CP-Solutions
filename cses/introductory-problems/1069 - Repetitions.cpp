#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
  string s;
  cin>>s;
  ll n= s.size();
  int count=1;
  int mx=0;
  for(int i=1;i<n;i++){
      if(s[i]!=s[i-1]){
          mx=max(mx,count);
          count=0;
      }
      count++;
  }
  mx=max(mx,count);
  cout<<mx<<"\n";
  
  return 0;
}