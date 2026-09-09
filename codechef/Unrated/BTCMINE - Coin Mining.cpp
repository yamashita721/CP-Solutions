#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans=INT_MAX;

	    for(int gpu=1;gpu<1000;gpu++){
	        int profit=y *gpu *(gpu + 1) *(2 *gpu +1) /6 - x * gpu;
	        int days=gpu;
	        while(profit <= 0) {
                profit += y * gpu * gpu;
                days++;
            }
            ans=min(ans,days);
	    }
	    cout<<ans<<endl;
	}

}
