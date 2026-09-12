#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
    cin>>n;
    int fx=0;
    int fy=0;
    int fz=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        fx+=x;
        fy+=y;
        fz+=z;
    }
    if(fx==0 && fy==0 && fz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}