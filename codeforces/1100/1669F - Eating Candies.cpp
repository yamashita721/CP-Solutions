#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int weight_alice=0;
        int weight_bob=0;
        int left=0;
        int right=n-1;
        int count=0;
        int ans=0;
        while(left<=right){
            if(weight_alice<=weight_bob){
                weight_alice+=v[left];
                left++;
            }
            else{
                weight_bob+=v[right];
                right--;
            }
             count++;
            if(weight_bob==weight_alice){
                ans=max(ans,count);
            }
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}