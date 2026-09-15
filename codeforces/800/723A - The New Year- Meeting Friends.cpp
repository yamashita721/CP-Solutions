#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int x,y,z;
  cin>>x>>y>>z;
  vector<int> v={x,y,z};
  sort(v.begin(),v.end());
  int dis=0;
  for(int i=0;i<v.size()-1;i++){
      dis+=v[i+1]-v[i];
  }
  cout<<dis<<endl;
  return 0;
}