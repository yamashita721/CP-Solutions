#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n,k;
  cin>>n>>k;
  multiset<int> v;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v.insert(x);
  }
  vector<int> c(k);
  for(int i=0;i<k;i++){
      cin>>c[i];
  }
  for(int i=0;i<k;i++){
      auto it=(v.upper_bound(c[i]));
      if(it==v.begin()){
          cout<<-1<<"\n";
      }
      else{
          it--;
          cout<<*it<<"\n";
          v.erase(it);
      }
      
  }
  
  return 0;
}