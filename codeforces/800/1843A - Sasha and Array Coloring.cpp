#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
      
        sort(v.begin(),v.end());
        int sum=0;
        int left=0;
        int right=n-1;
        while(left<right){
            sum+=v[right]-v[left];
            right--;
            left++;
        }
        cout<<sum<<endl;
    }
}