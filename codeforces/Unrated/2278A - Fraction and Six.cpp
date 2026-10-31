#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        string b;
        cin>>b;
        b+="six";
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        
        
    }
  return 0;
}