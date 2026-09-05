#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      int count=0;
      for(int i=0;i<n;i+=k){
          bool tru=false;
          for(int j=i;j<i+k;j++){
              if(s[j]=='0'){
                  tru=true;
                  break;
              }
          }
          if(tru){
              count+=0;
          }
          else{
              count+=1;
          }
      }
      cout<<count<<endl;
  }
  return 0;
}