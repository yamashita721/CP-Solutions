#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> se;
    for(char c:s){
        se.insert(c);
    }
    int n=se.size();
    if(n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}