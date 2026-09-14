#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int left=240-k;
    int count=0;
    for(int i=1;i<=n;i++){
        left-=5*i;
        if(left<0){
            break;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
}