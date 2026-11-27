class Solution {
public:
    void solve(vector<int> nums, int n, vector<int> ans, int i, vector<vector<int>> &v){
        if(i==n){
            v.push_back(ans);
            return;
        }
        vector<int> temp=ans;
        temp.push_back(nums[i]);
        solve(nums,n,temp,i+1,v);
        solve(nums,n,ans,i+1,v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        int n=nums.size();
        int count=0;
        solve(nums, n, {}, count, v);
        return v;
    }
};