class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();//-1,-100,3,99
        k%=n;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
};