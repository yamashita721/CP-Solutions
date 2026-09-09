#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    string b;
	    cin>>b;
	    int cnt_a=0;
	    int cnt_b=0;
	    for(int i=0;i<n;i++){
	        if(a[i]=='a'){
	            cnt_a++;
	        }
	        else{
	            cnt_b++;
	        }
	    }
	    int cnt_a_2=0;
	    int cnt_b_2=0;
	    for(int i=0;i<n;i++){
	        if(b[i]=='a'){
	            cnt_a_2++;
	        }
	        else{
	            cnt_b_2++;
	        }
	    }
	    if(cnt_a+cnt_a_2==n){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
