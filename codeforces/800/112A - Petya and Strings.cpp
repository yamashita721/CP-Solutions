#include <bits/stdc++.h>
using namespace std;

int main(){
    string f,s;
    cin>>f>>s;
    string a="";
    string b="";
    for(char c:f){
        a+=tolower(c);
    }
    for(char c:s){
        b+=tolower(c);
    }
    int ans=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<b[i]){
            ans=-1;
            break;
        }
        else if(b[i]<a[i]){
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;
}