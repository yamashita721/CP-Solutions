#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin>>t;
  while(t--){
      int l,a,c;
  cin>>l>>a>>c;
  long long fir=gcd(l,a);
  long long rir=gcd(l,c);
  long long com=lcm(fir,rir);
  cout<<l/com<<endl;
  }
  return 0;
}