#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      string s;
      cin>>s;
      string x="";
      for(char c:s){
          x+=tolower(c);
      }
      if(x=="yes"){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
  }
  return 0;
}