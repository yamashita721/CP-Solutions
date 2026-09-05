#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int val=0;
    while(n--){
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='+' && s[i+1]=='+'){
                val++;
            }
            else if(s[i]=='-' && s[i+1]=='-'){
                val--;
            }
        }
    }
    cout<<val<<endl;
}