class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> m;

        int left=0;
        for(int i=0;i<nums.size();i++){
            if(m.size()<k){
                m.insert(nums[i]);
            }
            if(m.size()==k){
                auto it= m.end();
                it--;
                ans.push_back(*it);
                m.erase(m.find(nums[left]));
                left++;
            }
        }
        return ans;
    }
};