#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
      }
      int odd=0;
      int mod_4=0;
      int mod_2=0;
      for(int i=0;i<n;i++){
          if(v[i]%2==1){
              odd++;
          }
          else if(v[i]%4==0){
              mod_4++;
          }
          else{
              mod_2++;
          }
      }
      
      
      cout<<max({odd,mod_4,mod_2})<<endl;
  }
  return 0;
}