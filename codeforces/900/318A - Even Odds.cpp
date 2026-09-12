#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,k;
    cin>>n>>k;
    ll odd= (n+1)/2;
    if(k<=odd){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<2*(k-odd);
    }
    
}