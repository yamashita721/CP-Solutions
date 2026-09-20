#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int neg=0;
      vector<long long> v(n);
      for(int i=0;i<n;i++){
          cin>>v[i];
          if(v[i]<0){
              neg++;
          }
      }
      long long sum=0;
      if(neg%2==0){
          
          for(int i=0;i<n;i++){
              sum+=abs(v[i]);
          }
      }
      else{
          sort(v.begin(),v.end(),[](long long a,long long b){
              return abs(a)<abs(b);
          });
          for(int i=0;i<n;i++){
              sum+=abs(v[i]);
          }
          sum-=2*abs(v[0]);
          
      }
      cout<<sum<<endl;
  }
  return 0;
}