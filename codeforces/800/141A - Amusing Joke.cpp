#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string s,p,q;
  cin>>s>>p>>q;
  string s1="";
  string s2="";
  for(int i=0;i<s.size();i++){
      s1+=s[i];
  }
  for(int i=0;i<p.size();i++){
      s1+=p[i];
  }
  for(int i=0;i<q.size();i++){
      s2+=q[i];
  }
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  if(s1==s2){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
  return 0;
}