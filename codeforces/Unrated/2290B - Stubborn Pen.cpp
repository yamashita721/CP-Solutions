#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  while(n--){
      int a;
      cin>>a;
      string s;
      cin>>s;
      int count=0;
      char c='R';
      for(int i=0;i<a;i++){
          if(s[i]==c){
              if(c=='B'){
                  c='R';
              }
              else{
                  c='B';
              }
          }
          else{
              count++;
              if(s[i]=='B'){
                  c='R';
              }
              else{
                  c='B';
              }
          }
      }
      cout<<count<<"\n";
      
      
      
  }
  return 0;
}