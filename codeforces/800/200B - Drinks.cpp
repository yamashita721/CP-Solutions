#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double sum=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    cout<<fixed<<setprecision(12)<<sum/double(n)<<endl;
}