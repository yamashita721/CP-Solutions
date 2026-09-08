#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string check="hello";
    string ans="";
    int it=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==check[it]){
            ans+=s[i];
            it++;
        }
    }
    if(ans==check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}