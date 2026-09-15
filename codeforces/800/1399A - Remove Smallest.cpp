#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      int check=0;
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      sort(v.begin(),v.end());
      bool tru=true;
      for(int i=0;i<n-1;i++){
          if(v[i+1]-v[i]>1){
              tru=false;
              break;
          }
          }
      if(tru){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
  return 0;
}