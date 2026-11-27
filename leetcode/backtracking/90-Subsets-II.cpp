class Solution {
public:
    void solve(vector<int> nums, set<vector<int>> &st, int i, vector<int> ans){
        if(i==nums.size()){
            st.insert(ans);
            return;
    }
    vector<int> temp=ans;
    temp.push_back(nums[i]);
    solve(nums, st, i+1, temp);
    solve(nums, st, i+1, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        solve(nums, st, 0, {});
        vector<vector<int>> v;
        for(auto x:st){
            v.push_back(x);
        }
        return v;
    }
};