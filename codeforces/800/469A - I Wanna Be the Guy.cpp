#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  int p;
  cin>>p;
  set<int> s;
  vector<int> v(p);
  for(int i=0;i<p;i++){
      cin>>v[i];
      s.insert(v[i]);
  }
  int q;
  cin>>q;
  vector<int> c(q);
  for(int i=0;i<q;i++){
      cin>>c[i];
      s.insert(c[i]);
  }
  if(s.size()==n){
      cout<<"I become the guy."<<endl;
  }
  else{
      cout<<"Oh, my keyboard!"<<endl;
  }
  
  return 0;
}