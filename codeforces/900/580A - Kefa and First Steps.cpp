#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  int maxi=1;
  int count=1;
  for(int i=1;i<n;i++){
      if(v[i]>=v[i-1]){
          count++;
          maxi=max(maxi,count);
      }
      else{
          maxi=max(maxi,count);
          count=1;
      }
  }
  cout<<maxi<<endl;
  return 0;
}