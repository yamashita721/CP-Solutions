class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int stable=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
        int maxi=INT_MIN;
            for(int j=0;j<=i;j++){
                maxi=max(maxi,nums[j]);
            }
            for(int k=i;k<n;k++){
                mini=min(mini,nums[k]);
            }
            int st=maxi-mini;
            if(st<=k){
                stable=i;
                break;
            }
        }
        return stable;
    }
};