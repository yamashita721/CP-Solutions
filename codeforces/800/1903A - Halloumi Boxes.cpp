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
            vector<int> g=v;
      
      sort(v.begin(),v.end());
      if(n!=1 && k==1 && v!=g){
          cout<<"NO"<<endl;
      }
      else{
          cout<<"YES"<<endl;
      }
  }
  return 0;
}