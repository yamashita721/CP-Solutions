#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    ll total=k*w*(w+1)/2;
    cout<<max(0ll,total-n)<<endl;
}