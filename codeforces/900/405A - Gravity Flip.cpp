#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  for(int i=n-1;i>=0;i--){
      for(int j=i-1;j>=0;j--){
        if(v[i]<v[j]){
            int val=v[i];
            v[i]+=v[j]-v[i];
            v[j]-=v[j]-val;
        }       
      }
  }
  for(int x: v){
      cout<<x<<" ";
  }
  cout<<"\n";
  return 0;
}