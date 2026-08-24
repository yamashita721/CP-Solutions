#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	map<char,int> m;
	for(int i=0;i<s.size();i++){
	    if(isalpha(s[i])){
	        m[tolower(s[i])]++;
	    }
	}
	int maxi=0;
	char c;
	for(auto x:m){
	    if(x.second>maxi){
	        maxi=x.second;
	        c=x.first;
	    }
	}
	cout<<c<<endl;

}
