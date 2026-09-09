#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int s,n;
  cin>>s>>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i].first>>v[i].second;
  }
  sort(v.begin(),v.end());
  for(auto p:v){
      int x=p.first;
      int y=p.second;
      if(s<=x){
          cout<<"NO";
          return 0;
      }
      s+=y;
  }
  cout<<"YES";
  
  return 0;
}