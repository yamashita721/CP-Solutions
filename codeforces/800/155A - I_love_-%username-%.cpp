#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  int count=0;
  for(int i=1;i<n;i++){
      bool tru=true;
      for(int j=i-1;j>=0;j--){
          if(v[i]<=v[j]){
              tru=false;
              break;
          }
      }
      bool tr=true;
      for(int j=i-1;j>=0;j--){
          if(v[i]>=v[j]){
              tr=false;
              break;
          }
      }
      if(tr || tru){
          count++;
      }
  }
  cout<<count<<endl;
  return 0;
}