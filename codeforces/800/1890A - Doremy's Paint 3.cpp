#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    unordered_map<int,int> s;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s[x]++;
    }
    vector<int> v;
    for(auto it=s.begin(); it!=s.end();it++){
        v.push_back(it->second);
    }
    if(s.size()>=3){
        cout<<"No"<<endl;
    }
    else if(v.size()==1){
        cout<<"Yes"<<endl;
    }
    else if(n%2!=0 && abs(v[0]-v[1])==1){
        cout<<"Yes"<<endl;
    }
    else if(n%2==0 && abs(v[0]-v[1])==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    
    
}