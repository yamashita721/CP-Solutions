class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int b=target-nums[i];
            if(m.find(b)!=m.end()){
                return {i,m[b]};
            }
            else{
                m[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};