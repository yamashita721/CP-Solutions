#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  while(n--){
      int a,b,c;
      cin>>a>>b>>c;
      if(b-a==1 && c-b==1){
          cout<<"Yes"<<"\n";
      }
      else{
          cout<<"No"<<"\n";
      }
  }
  return 0;
}