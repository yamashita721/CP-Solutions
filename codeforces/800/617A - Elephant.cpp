#include<bits/stdc++.h>
using namespace std;
 
int main() {
  int x;
  cin>>x;
  int sum=0;
  sum+=x/5;
  x%=5;
  sum+=x/4;
  x%=4;
  sum+=x/3;
  x%=3;
  sum+=x/2;
  x%=2;
  sum+=x;
  cout<<sum;
  return 0;
}