#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int g=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            g=__gcd(g,x);
        }
        if(g==1){
            cout<<0<<endl;
        }
        else if(__gcd(g,n)==1){
            cout<<1<<endl;
        }
        else if(__gcd(g,n-1)==1){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
}