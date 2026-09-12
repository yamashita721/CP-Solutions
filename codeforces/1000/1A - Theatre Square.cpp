#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    ll p=(n+a-1)/a;
    ll q=(m+a-1)/a;
    cout<<p*q<<endl;
}