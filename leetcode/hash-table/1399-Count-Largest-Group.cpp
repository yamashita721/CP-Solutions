class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> v(100);
        for(int i=1;i<=n;i++){
            int sum=0;
            int p=i;
            while(p>0){
                int last=p%10;
                sum+=last;
                p/=10;
            }
            v[sum]++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int count=1;
        for(int i=1;i<n;i++){
            if(v[i]!=v[i-1]){
                break;
            }
            else{
                count++;
            }
        }
        return count;
    }
};