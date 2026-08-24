#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,k;
	cin>>x>>y>>k;
	int diff=abs(x-y);
	if(diff<=k){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}

}
