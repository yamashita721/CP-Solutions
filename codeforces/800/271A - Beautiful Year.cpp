#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=n+1;i<=n+1000;i++){
        set<int> s;
        int p=i;
        while(p>0){
            int last=p%10;
            s.insert(last);
            p/=10;
        }
        if(s.size()==4){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}