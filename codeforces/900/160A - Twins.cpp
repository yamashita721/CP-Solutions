#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    
    sort(v.begin(),v.end(),greater<int>());
    
    
    int sum_1=0;
    for(int i=0;i<n;i++){
        sum_1+=v[i];
        if(sum_1>total-sum_1){
            cout<<i+1<<endl;
            break;
        }
    }
}

