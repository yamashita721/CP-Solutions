#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      vector<int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      vector<int> a=v;
      sort(v.begin(),v.end());
      if(v==a){
          cout<<"YES"<<endl;
      }
      else if(k>1){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
  return 0;
}