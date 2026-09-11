#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string a;
      cin>>a;
      string b;
      cin>>b;
      int count_1a=0;
      int odd_pos_a=0;
      int even_pos_a=0;
      int count_1b=0;
      int odd_pos_b=0;
      int even_pos_b=0;
      for(int i=0;i<n;i++){
          if(a[i]=='1'){
              count_1a++;
              if(i%2==0){
                  even_pos_a++;
              }
              else{
                  odd_pos_a++;
              }
          }
          if(b[i]=='1'){
              count_1b++;
              if(i%2==0){
                  even_pos_b++;
              }
              else{
                  odd_pos_b++;
              }
          }
      }
      if(count_1b!=count_1a){
          cout<<"NO"<<endl;
      }
      else{
          if(even_pos_a==even_pos_b && odd_pos_a==odd_pos_b){
              cout<<"YES"<<endl;
          }
          else{
              cout<<"NO"<<endl;
          }
      }
  }
  return 0;
}