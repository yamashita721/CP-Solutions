class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(next_permutation(nums.begin(),nums.end())){
            for(auto x:nums){
                cout<<x;
            }
        }
    }
};