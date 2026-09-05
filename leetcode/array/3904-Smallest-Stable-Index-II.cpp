class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> prefix_max(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefix_max[i]=maxi;
        }
        vector<int> suffix_min(n);
        int mini=INT_MAX;
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            suffix_min[i]=mini;
        }
        
        for(int i=0;i<n;i++){
            if(prefix_max[i]-suffix_min[i]<=k){
                return i;
            }
        }
        return -1;
    }
};