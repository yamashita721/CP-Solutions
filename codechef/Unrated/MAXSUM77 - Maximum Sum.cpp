#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int len=n-k;
	   
	    int sum2=0;
	    for(int i=0;i<len;i++){
	        sum2+=v[i];
	    }
	     int maxi=sum2;
	    for(int i=len;i<n;i++){
	        sum2+=v[i];
	        sum2-=v[i-len];
	        maxi=max(maxi,sum2);
	    }
	    cout<<maxi<<endl;
	}

}
