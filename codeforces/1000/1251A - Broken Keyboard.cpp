#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char> str;
        int n=s.size();
        for(int i=0;i<n;){
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
            }
            if((j-i)%2==1){
                str.insert(s[i]);
            }
            i=j;
        }
        for(auto x:str){
            cout<<x;
        }
        cout<<endl;
    }
}